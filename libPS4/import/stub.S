	.section .data.stub, "aw"
	.align	8
	.global	FUNCTION
	.type	FUNCTION, @common
FUNCTION:
	.quad	MODULE_SYMBOL
	.quad	FUNCTION_str

	.size	FUNCTION, . - FUNCTION

	.section .rodata
FUNCTION_str:
	.asciz	"FUNCTION"
