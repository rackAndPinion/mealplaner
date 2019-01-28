	.file	"food.c"
	.section .rdata,"dr"
LC0:
	.ascii "Name: \0"
LC1:
	.ascii "%s\0"
LC2:
	.ascii "Carbohydrates: \0"
LC3:
	.ascii "%i\0"
LC4:
	.ascii "protin: \0"
LC5:
	.ascii "fat: \0"
	.text
	.globl	_newfood
	.def	_newfood;	.scl	2;	.type	32;	.endef
_newfood:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$36, (%esp)
	call	_malloc
	movl	%eax, -12(%ebp)
	movl	$LC0, (%esp)
	call	_printf
	movl	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$LC2, (%esp)
	call	_printf
	movl	-12(%ebp), %eax
	addl	$20, %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movl	$LC4, (%esp)
	call	_printf
	movl	-12(%ebp), %eax
	addl	$24, %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movl	$LC5, (%esp)
	call	_printf
	movl	-12(%ebp), %eax
	addl	$28, %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movl	-12(%ebp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.section .rdata,"dr"
LC6:
	.ascii "Name: %s\12\0"
LC7:
	.ascii "Carbohydrates: %d\12\0"
LC8:
	.ascii "protin: %d\12\0"
LC9:
	.ascii "fat: %d\12\12\0"
	.text
	.globl	_seefood
	.def	_seefood;	.scl	2;	.type	32;	.endef
_seefood:
LFB15:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	movl	8(%ebp), %eax
	movl	20(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC7, (%esp)
	call	_printf
	movl	8(%ebp), %eax
	movl	24(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC8, (%esp)
	call	_printf
	movl	8(%ebp), %eax
	movl	28(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC9, (%esp)
	call	_printf
	movl	8(%ebp), %eax
	movl	32(%eax), %eax
	movl	%eax, 8(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE15:
	.section .rdata,"dr"
LC10:
	.ascii "%d) %s\12\0"
	.text
	.globl	_printfoodlist
	.def	_printfoodlist;	.scl	2;	.type	32;	.endef
_printfoodlist:
LFB16:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$1, -12(%ebp)
	jmp	L5
L6:
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, 8(%esp)
	movl	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC10, (%esp)
	call	_printf
	movl	8(%ebp), %eax
	movl	4(%eax), %eax
	movl	%eax, 8(%ebp)
	addl	$1, -12(%ebp)
L5:
	cmpl	$0, 8(%ebp)
	jne	L6
	movl	$10, (%esp)
	call	_putchar
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE16:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_malloc;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_putchar;	.scl	2;	.type	32;	.endef
