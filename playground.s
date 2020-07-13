	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 4
	.globl	_rsum                   ## -- Begin function rsum
	.p2align	4, 0x90
_rsum:                                  ## @rsum
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	testq	%rsi, %rsi
	jle	LBB0_1
## %bb.2:
	incq	%rsi
	xorl	%eax, %eax
	.p2align	4, 0x90
LBB0_3:                                 ## =>This Inner Loop Header: Depth=1
	addq	(%rdi), %rax
	addq	$8, %rdi
	decq	%rsi
	cmpq	$1, %rsi
	jg	LBB0_3
## %bb.4:
	popq	%rbp
	retq
LBB0_1:
	xorl	%eax, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
