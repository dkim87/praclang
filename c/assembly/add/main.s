	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 11
	.intel_syntax noprefix
	.globl	_addtwo
	.align	4, 0x90
_addtwo:                                ## @addtwo
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp2:
	.cfi_def_cfa_register rbp
	mov	dword ptr [rbp - 4], edi
	mov	edi, dword ptr [rbp - 4]
	add	edi, 2
	mov	eax, edi
	pop	rbp
	ret
	.cfi_endproc

	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	push	rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Ltmp5:
	.cfi_def_cfa_register rbp
	sub	rsp, 16
	mov	dword ptr [rbp - 4], 0
	mov	dword ptr [rbp - 8], 3
	mov	edi, dword ptr [rbp - 8]
	call	_addtwo
	xor	edi, edi
	mov	dword ptr [rbp - 12], eax
	mov	eax, edi
	add	rsp, 16
	pop	rbp
	ret
	.cfi_endproc


.subsections_via_symbols
