	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	__Z8functionv           ## -- Begin function _Z8functionv
	.p2align	4, 0x90
__Z8functionv:                          ## @_Z8functionv
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	leaq	_counter(%rip), %rax
	movq	%rax, -32(%rbp)
	movl	$0, -36(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, -8(%rbp)
	movl	$1, -12(%rbp)
	movl	$5, -16(%rbp)
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %ecx
	movl	-12(%rbp), %edx
	movl	%edx, -20(%rbp)
	decl	%ecx
	movl	%ecx, %esi
	subl	$4, %ecx
	movq	%rax, -48(%rbp)         ## 8-byte Spill
	movq	%rsi, -56(%rbp)         ## 8-byte Spill
	movl	%ecx, -60(%rbp)         ## 4-byte Spill
	ja	LBB0_1
## BB#7:
	leaq	LJTI0_0(%rip), %rax
	movq	-56(%rbp), %rcx         ## 8-byte Reload
	movslq	(%rax,%rcx,4), %rdx
	addq	%rax, %rdx
	jmpq	*%rdx
LBB0_1:
	movl	-20(%rbp), %eax
	movq	-48(%rbp), %rcx         ## 8-byte Reload
	lock		xaddl	%eax, (%rcx)
	movl	%eax, -24(%rbp)
	jmp	LBB0_6
LBB0_2:
	movl	-20(%rbp), %eax
	movq	-48(%rbp), %rcx         ## 8-byte Reload
	lock		xaddl	%eax, (%rcx)
	movl	%eax, -24(%rbp)
	jmp	LBB0_6
LBB0_3:
	movl	-20(%rbp), %eax
	movq	-48(%rbp), %rcx         ## 8-byte Reload
	lock		xaddl	%eax, (%rcx)
	movl	%eax, -24(%rbp)
	jmp	LBB0_6
LBB0_4:
	movl	-20(%rbp), %eax
	movq	-48(%rbp), %rcx         ## 8-byte Reload
	lock		xaddl	%eax, (%rcx)
	movl	%eax, -24(%rbp)
	jmp	LBB0_6
LBB0_5:
	movl	-20(%rbp), %eax
	movq	-48(%rbp), %rcx         ## 8-byte Reload
	lock		xaddl	%eax, (%rcx)
	movl	%eax, -24(%rbp)
LBB0_6:
	popq	%rbp
	retq
	.cfi_endproc
	.p2align	2, 0x90
	.data_region jt32
L0_0_set_2 = LBB0_2-LJTI0_0
L0_0_set_3 = LBB0_3-LJTI0_0
L0_0_set_4 = LBB0_4-LJTI0_0
L0_0_set_5 = LBB0_5-LJTI0_0
LJTI0_0:
	.long	L0_0_set_2
	.long	L0_0_set_2
	.long	L0_0_set_3
	.long	L0_0_set_4
	.long	L0_0_set_5
	.end_data_region
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi3:
	.cfi_def_cfa_offset 16
Lcfi4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi5:
	.cfi_def_cfa_register %rbp
	callq	__Z8functionv
	xorl	%eax, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_counter                ## @counter
.zerofill __DATA,__common,_counter,4,2

.subsections_via_symbols
