	.include "asm/macros.inc"

	.section .rodata
	.global gbs_lookrival
	.align 1

gbs_lookrival_Ch1:
	gbs_switch 0
	tempo 112
	volume 7, 7
	duty_cycle 1
	pitch_offset 1
	vibrato 18, 1, 5
	stereo_panning FALSE, TRUE
	note_type 12, 11, 2
	octave 4
	note C_, 1
	octave 3
	note As, 1
	note Gs, 2
	note As, 1
	note Gs, 1
	note Fs, 2
	note F_, 6
	volume_envelope 11, 7
	note Gs, 6
	volume_envelope 11, 2
	note As, 4
	note F_, 2
	note Gs, 4
	volume_envelope 10, 0
	note Gs, 10
	volume_envelope 10, 5
	note Gs, 8
	volume_envelope 10, 6
	note Fs, 8
	.global gbs_lookrival_Ch1.mainloop
gbs_lookrival_Ch1.mainloop:
	volume_envelope 11, 5
	note F_, 4
	note Ds, 2
	note F_, 6
	note F_, 2
	note G_, 2
	note Gs, 4
	note As, 4
	note Gs, 2
	note G_, 4
	volume_envelope 10, 0
	note F_, 2
	volume_envelope 10, 7
	note F_, 16
	volume_envelope 6, 6
	rest 2
	note F_, 2
	note G_, 4
	volume_envelope 11, 6
	note Gs, 4
	octave 4
	note C_, 4
	octave 3
	note As, 4
	note Gs, 2
	note As, 6
	volume_envelope 11, 4
	note As, 2
	octave 4
	note C_, 2
	note Cs, 2
	note Cs, 2
	note Ds, 2
	note Ds, 2
	note Cs, 2
	note C_, 6
	volume_envelope 11, 7
	octave 3
	note As, 12
	note Gs, 2
	note G_, 2
	note Gs, 2
	note As, 10
	note B_, 4
	octave 4
	note C_, 6
	octave 3
	note As, 6
	octave 4
	note D_, 2
	note C_, 2
	octave 3
	note As, 6
	note G_, 10
	note As, 6
	note Gs, 6
	octave 4
	note C_, 2
	octave 3
	note As, 2
	note Gs, 8
	note F_, 6
	note C_, 2
gbs_lookrival_Ch1.loop1:
	volume_envelope 11, 2
	note F_, 6
	volume_envelope 11, 7
	note Gs, 4
	note Fs, 2
	note F_, 2
	note Ds, 2
	sound_loop 3, gbs_lookrival_Ch1.loop1
	volume_envelope 11, 2
	note F_, 2
	note Gs, 4
	volume_envelope 11, 7
	note Gs, 6
	note Fs, 4
	sound_loop 0, gbs_lookrival_Ch1.mainloop

gbs_lookrival_Ch2:
	gbs_switch 1
	duty_cycle 3
	vibrato 8, 3, 6
	stereo_panning TRUE, FALSE
	note_type 12, 12, 2
	octave 4
	note Fs, 2
	note F_, 2
	note Ds, 2
	note Cs, 2
	note C_, 6
	volume_envelope 12, 7
	note Ds, 6
	volume_envelope 12, 2
	note F_, 4
	note C_, 2
	note Ds, 4
	volume_envelope 11, 0
	note Ds, 10
	volume_envelope 11, 7
	note Ds, 16
	.global gbs_lookrival_Ch2.mainloop
gbs_lookrival_Ch2.mainloop:
	volume_envelope 12, 7
	note C_, 12
	volume_envelope 12, 4
	note C_, 2
	note D_, 2
	note Ds, 4
	note D_, 4
	note C_, 2
	note D_, 4
	volume_envelope 11, 0
	note C_, 6
	volume_envelope 11, 7
	note C_, 8
	volume_envelope 11, 4
	octave 3
	note A_, 2
	note G_, 2
	note A_, 2
	volume_envelope 12, 6
	octave 4
	note C_, 6
	volume_envelope 12, 7
	note Ds, 8
	note F_, 12
	volume_envelope 12, 4
	note F_, 2
	note G_, 2
	note Gs, 2
	note Gs, 2
	note G_, 2
	note G_, 2
	note F_, 2
	volume_envelope 12, 4
	note G_, 6
	volume_envelope 11, 0
	note F_, 16
	volume_envelope 11, 7
	note F_, 16
	volume_envelope 11, 0
	note G_, 12
	note F_, 4
	note E_, 16
	note F_, 12
	note Ds, 4
	volume_envelope 12, 7
	note D_, 8
	volume_envelope 12, 4
	note C_, 2
	note D_, 2
	note Ds, 1
	note D_, 1
	note Ds, 2
gbs_lookrival_Ch2.loop1:
	volume_envelope 12, 2
	note C_, 6
	volume_envelope 12, 7
	note Ds, 6
	volume_envelope 12, 2
	note F_, 4
	sound_loop 3, gbs_lookrival_Ch2.loop1
	note C_, 2
	note Ds, 4
	volume_envelope 12, 7
	note Ds, 10
	sound_loop 0, gbs_lookrival_Ch2.mainloop

gbs_lookrival_Ch3:
	gbs_switch 2
	note_type 12, 2, 8
	rest 2
	octave 4
	note C_, 2
	octave 3
	note Gs, 2
	note Fs, 2
	note F_, 4
	note Gs, 2
	note Ds, 4
	note C_, 2
	note D_, 2
	note Ds, 2
	note Gs, 2
	note Fs, 2
	note F_, 2
	note Ds, 10
	note Ds, 10
	note C_, 2
	note Ds, 2
	note Fs, 2
	.global gbs_lookrival_Ch3.mainloop
gbs_lookrival_Ch3.mainloop:
gbs_lookrival_Ch3.loop1:
	sound_call gbs_lookrival_Ch3.sub1
	sound_loop 3, gbs_lookrival_Ch3.loop1
	note F_, 4
	note C_, 2
	note Ds, 4
	note Gs, 2
	note G_, 2
	note Fs, 2
	sound_call gbs_lookrival_Ch3.sub2
	note As, 2
	note F_, 2
	note G_, 2
	note Gs, 4
	note F_, 2
	note G_, 2
	note Gs, 1
	note A_, 1
	sound_call gbs_lookrival_Ch3.sub3
	note As, 2
	note F_, 2
	note G_, 2
	note Gs, 4
	note F_, 2
	note As, 2
	note B_, 2
	octave 4
	note C_, 4
	octave 3
	note G_, 2
	note As, 4
	note G_, 2
	note A_, 2
	note As, 2
	octave 4
	note C_, 4
	octave 3
	note G_, 2
	note As, 4
	note G_, 2
	note A_, 2
	note As, 1
	note A_, 1
	sound_call gbs_lookrival_Ch3.sub2
	sound_call gbs_lookrival_Ch3.sub3
	sound_call gbs_lookrival_Ch3.sub1
	sound_call gbs_lookrival_Ch3.sub1
	note F_, 2
	note C_, 2
	note D_, 2
	note Ds, 4
	note C_, 2
	note D_, 2
	note Ds, 1
	note E_, 1
	note F_, 2
	note C_, 2
	note D_, 2
	note Ds, 4
	note C_, 2
	note Fs, 2
	note E_, 2
	sound_loop 0, gbs_lookrival_Ch3.mainloop

gbs_lookrival_Ch3.sub1:
	note F_, 2
	note C_, 2
	note D_, 2
	note Ds, 4
	note C_, 2
	note D_, 2
	note Ds, 2
	sound_ret

gbs_lookrival_Ch3.sub2:
	note As, 2
	note F_, 2
	note G_, 2
	note Gs, 4
	note F_, 2
	note G_, 2
	note Gs, 2
	sound_ret

gbs_lookrival_Ch3.sub3:
	note As, 4
	note F_, 2
	note Gs, 4
	note F_, 2
	note G_, 2
	note Gs, 2
	sound_ret

gbs_lookrival_Ch4:
	gbs_switch 3
	stereo_panning TRUE, FALSE
	toggle_noise 3
	drum_speed 12
	rest 8
	rest 16
	drum_note 4, 2
	drum_note 3, 4
	drum_note 3, 6
	drum_note 3, 4
	drum_note 4, 4
	drum_note 4, 4
	drum_note 3, 2
	drum_note 3, 2
	drum_note 3, 2
	drum_note 3, 2
	.global gbs_lookrival_Ch4.mainloop
gbs_lookrival_Ch4.mainloop:
	drum_note 4, 4
	drum_note 3, 2
	drum_note 4, 4
	drum_note 4, 2
	drum_note 3, 4
	drum_note 4, 4
	drum_note 3, 2
	drum_note 4, 4
	drum_note 4, 2
	drum_note 3, 2
	drum_note 3, 2
	sound_loop 0, gbs_lookrival_Ch4.mainloop

	.align 4
gbs_lookrival:
	.byte 4	@ NumTrks
	.byte 0	@ NumBlks
	.byte 0	@ Priority
	.byte 0	@ Reverb

	.int voicegroup000

	.int gbs_lookrival_Ch1
	.int gbs_lookrival_Ch2
	.int gbs_lookrival_Ch3
	.int gbs_lookrival_Ch4
