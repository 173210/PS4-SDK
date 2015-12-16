#pragma once

#include "types.h"

typedef struct timeval SceKernelTimeval;

extern int (*sceKernelLoadStartModule)(const char *name, size_t argc, const void *argv, unsigned int flags, int, int);

extern int (*sceKernelAllocateDirectMemory)(off_t searchStart, off_t searchEnd, size_t length, size_t alignment, int type, off_t *physicalAddressDestination);
extern int (*sceKernelMapDirectMemory)(void **addr, size_t length, int protection, int flags, off_t start, size_t alignment);

extern unsigned int (*sceKernelSleep)(unsigned int seconds);
extern int (*sceKernelUsleep)(unsigned int microseconds);
extern int (*sceKernelGettimeofday)(SceKernelTimeval *tp);
extern uint64_t (*sceKernelGetProcessTime)(void);
extern int (*sceKernelGetCurrentCpu)(void);

int kill(int pid, int signum);
