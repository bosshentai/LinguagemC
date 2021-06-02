	.file	"ex03.c"
	.text
	.section	.rodata
	.align 8
.LC1:
	.string	"Eu sou o(a) %s , tenho %d anos, meco %1.2f metros de altura e meu genero %c \n\nEsutdo na universidade de mindelo .... %d \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movabsq	$29676237298492744, %rax
	movq	%rax, -18(%rbp)
	movw	$0, -10(%rbp)
	movl	$27, -32(%rbp)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -28(%rbp)
	movb	$109, -33(%rbp)
	movl	$4933, -24(%rbp)
	movsbl	-33(%rbp), %ecx
	cvtss2sd	-28(%rbp), %xmm0
	movl	-24(%rbp), %esi
	movl	-32(%rbp), %edx
	leaq	-18(%rbp), %rax
	movl	%esi, %r8d
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L2
	call	__stack_chk_fail@PLT
.L2:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC0:
	.long	1071476900
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
