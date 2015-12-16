$(eval $(call IMPORT,kernel,__libkernel,\"libkernel.sprx\",	\
	sceKernelLoadStartModule sceKernelAllocateDirectMemory	\
	sceKernelMapDirectMemory sceKernelSleep	\
	sceKernelUsleep sceKernelGettimeofday	\
	sceKernelGetProcessTime sceKernelGetCurrentCpu	\
	\
	scePthreadCreate scePthreadExit scePthreadDetach scePthreadJoin	\
	scePthreadYield	 scePthreadSelf scePthreadCancel scePthreadMutexInit	\
	scePthreadMutexDestroy scePthreadMutexLock scePthreadMutexTrylock	\
	scePthreadMutexTimedlock scePthreadMutexUnlock))
