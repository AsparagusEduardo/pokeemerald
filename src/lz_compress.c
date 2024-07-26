#include "global.h"

u32 FastRLE0CompressUnsafe(u16 * src, u16 * dst, u32 size)
{
    u32 srcHword;
    u32 count;
    u32 startLiteral;
    u32 compressedSize;
    u16 * dstStart = dst;
    u16 * srcEnd = src + size/2;

    srcHword = *src++;
    dst++;
    if (srcHword == 0) {
        startLiteral = FALSE;
        goto doRLE0;
    } else {
        startLiteral = TRUE;
        goto doLiteral;
    }

    {
doRLE0:
        {
            count = 1;
            while (TRUE) {
                if (src < srcEnd) {
                    srcHword = *src++;
                    if (srcHword == 0) {
                        count++;
                    } else {
                        *dst++ = count;
                        goto doLiteral;
                    }
                } else {
                    *dst++ = count;
                    goto done;
                }
            }
        }
doLiteral:
        {
            u16 * literalCountDst = dst;
            dst++;
            *dst++ = srcHword;
            count = 1;

            while (TRUE) {
                if (src < srcEnd) {
                    srcHword = *src++;
                    if (srcHword != 0) {
                        *dst++ = srcHword;
                        count++;
                    } else {
                        *literalCountDst = count;
                        goto doRLE0;
                    }
                } else {
                    *literalCountDst = count;
                    goto done;
                }
            }
        }
    }

done:
    compressedSize = (dst - dstStart) * 2;
    *dstStart = (startLiteral << 15) | compressedSize;
    return compressedSize;
}

u32 FastRLE0Compress(u16 * src, u16 * dst, u32 size)
{
    u32 srcHword;
    u32 count;
    u16 * dstStart = dst;
    u16 * dstLimit = dst + size;
    u16 * srcEnd = src + size;

    srcHword = *src++;
    if (srcHword == 0) {
        *dst++ = FALSE;
        goto doRLE0;
    } else {
        *dst++ = TRUE;
        goto doLiteral;
    }

    {
doRLE0:
        {
            count = 1;
            while (TRUE) {
                if (src < srcEnd) {
                    srcHword = *src++;
                    if (srcHword == 0) {
                        count++;
                    } else {
                        if (dst + count < dstLimit) {
                            *dst++ = count;
                            goto doLiteral;
                        } else {
                            // fail
                            return 0;
                        }
                    }
                } else {
                    *dst++ = count;
                    goto done;
                }
            }
        }
doLiteral:
        {
            u16 * literalCountDst = dst;
            if (dst + 3 < dstLimit) {
                dst++;
                *dst++ = srcHword;
                count = 1;

                while (TRUE) {
                    if (src < srcEnd) {
                        srcHword = *src++;
                        if (srcHword != 0) {
                            *dst++ = srcHword;
                            count++;
                            if (dst >= dstLimit) {
                                return 0;
                            }
                        } else {
                            *literalCountDst = count;
                            goto doRLE0;
                        }
                    } else {
                        *literalCountDst = count;
                        goto done;
                    }
                }
            } else {
                return 0;
            }
        }
    }

done:
    return (dst - dstStart) * 2;
}

void FastRLE0Decompress(u16 * src, u16 * dst, u16 uncompressedSize)
{
    u32 srcHword;
    u32 count;
    u16 * dstEnd = dst + uncompressedSize;

    if (!(*src++ & 0x8000)) {
        // start with RLE 0
        goto startRLE0;
    } else {
        goto startLiteralCopy;
    }

    while (TRUE) {
startRLE0:
        if (dst < dstEnd) {
            count = *src++;
            if (dst + count < dstEnd + 1) {
                CpuFill16(0, dst, count * 2);
                dst += count;
            } else {
                break;
            }
        } else {
            break;
        }

startLiteralCopy:
        if (dst < dstEnd) {
            count = *src++;
            if (dst + count < dstEnd + 1) {
                CpuCopy16(src, dst, count * 2);
                src += count;
                dst += count;
            } else {
                break;
            }
        } else {
            break;
        }
    }
}
