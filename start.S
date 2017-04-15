.global _start
_start:
	ldr r0,=0xE0200280
	ldr r1,=0x1111
	str r1,[r0]
	mov r2,#0
	mov r3,#0x1
loop:
	ldr r0,=0xE0200284
	mov r1,r3,lsl r2
	str r1,[r0]
	add r2,r2,#1
	cmp r2,#4
	blt loop
over:
   b over
   