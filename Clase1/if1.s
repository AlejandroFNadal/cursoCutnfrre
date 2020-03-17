	.file	"if1.c"
	.text
	.section	.rodata
.LC0:
	.string	"Circo Trampolin"
.LC1:
	.string	"Ingrese la edad del cliente"
.LC2:
	.string	"%d"
	.align 8
.LC3:
	.string	"Usted aun no ha nacido. Vayase de nuestro circo, por favor"
	.align 8
.LC4:
	.string	"Felicidades, usted no paga entrada"
.LC5:
	.string	"Usted tiene 20% de descuento"
	.align 8
.LC6:
	.string	"Bienvenido, usted no tiene descuento. :-("
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	leaq	-4(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	-4(%rbp), %eax
	testl	%eax, %eax
	jns	.L2
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L3
.L2:
	movl	-4(%rbp), %eax
	testl	%eax, %eax
	jle	.L4
	movl	-4(%rbp), %eax
	cmpl	$4, %eax
	jg	.L4
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L3
.L4:
	movl	-4(%rbp), %eax
	cmpl	$4, %eax
	jle	.L5
	movl	-4(%rbp), %eax
	cmpl	$17, %eax
	jg	.L5
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L3
.L5:
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L3:
	call	getchar@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
