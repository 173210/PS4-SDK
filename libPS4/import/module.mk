# Just use sceKernelLoadStartModule instead
$(eval $(call IMPORT,module,-DMODULE_SYMBOL=__libSceSysmodule -DMODULE_PATH=\"libSceSysmodule.sprx\",	\
	sceSysmoduleLoadModule))
