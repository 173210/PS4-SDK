#ifdef MODULE_ANUAL
	.data
#else
	.section .data.module, "aw"
#endif
	.align	8
	.global	MODULE_SYMBOL
	.type	MODULE_SYMBOL, @common
MODULE_SYMBOL:
	.quad	MODULE_SYMBOL_path

	.size	MODULE_SYMBOL, . - MODULE_SYMBOL

	.section .rodata
MODULE_SYMBOL_path:
	.asciz MODULE_PATH
