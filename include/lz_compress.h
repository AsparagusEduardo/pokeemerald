#ifndef GUARD_LZ_COMPRESS_H
#define GUARD_LZ_COMPRESS_H

u32 FastRLE0Compress(u16 *src, u16 *dest, u32 srcSize);
u32 FastRLE0CompressUnsafe(u16 * src, u16 * dst, u32 size);
void FastRLE0Decompress(u16 * src, u16 * dst, u16 uncompressedSize);

#endif
