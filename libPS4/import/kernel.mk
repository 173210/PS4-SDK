$(eval $(call IMPORT,kernel,-DMODULE_MANUAL -DMODULE_SYMBOL=__libkernel -DMODULE_PATH=\"libkernel.sprx\",	\
	sceKernelAllocateDirectMemory sceKernelMapDirectMemory	\
	sceKernelSleep sceKernelUsleep sceKernelGettimeofday	\
	sceKernelGetProcessTime sceKernelGetCurrentCpu	\
	\
	scePthreadCreate scePthreadExit scePthreadDetach scePthreadJoin	\
	scePthreadYield	 scePthreadSelf scePthreadCancel scePthreadMutexInit	\
	scePthreadMutexDestroy scePthreadMutexLock scePthreadMutexTrylock	\
	scePthreadMutexTimedlock scePthreadMutexUnlock))
