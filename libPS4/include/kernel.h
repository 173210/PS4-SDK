#pragma once

#include "types.h"

typedef struct timeval SceKernelTimeval;

extern int (* const sceKernelLoadStartModule)(const char *name, size_t argc, const void *argv, unsigned int flags, int, int);

extern int (* const sceKernelAllocateDirectMemory)(off_t searchStart, off_t searchEnd, size_t length, size_t alignment, int type, off_t *physicalAddressDestination);
extern int (* const sceKernelMapDirectMemory)(void **addr, size_t length, int protection, int flags, off_t start, size_t alignment);

extern unsigned int (* const sceKernelSleep)(unsigned int seconds);
extern int (* const sceKernelUsleep)(unsigned int microseconds);
extern int (* const sceKernelGettimeofday)(SceKernelTimeval *tp);
extern uint64_t (* const ceKernelGetProcessTime)(void);
extern int (* const sceKernelGetCurrentCpu)(void);

int kill(int pid, int signum);
