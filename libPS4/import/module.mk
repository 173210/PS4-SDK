# Just use sceKernelLoadStartModule instead
$(eval $(call IMPORT,module,__libSceSysmodule,\"libSceSysmodule.sprx\",	\
	sceSysmoduleLoadModule))
