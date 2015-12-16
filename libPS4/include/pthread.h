#pragma once

typedef void *ScePthread;
typedef void *ScePthreadAttr;

typedef void *ScePthreadMutex;
typedef void *ScePthreadMutexattr;

extern int (* const scePthreadCreate)(ScePthread *thread, const ScePthreadAttr *attr, void *(*entry)(void *), void *arg, const char *name);
extern void (* const scePthreadExit)(void *value);
extern int (* const scePthreadDetach)(ScePthread thread);
extern int (* const scePthreadJoin)(ScePthread thread, void **value_ptr);
extern void (* const scePthreadYield)(void);
extern ScePthread (* const scePthreadSelf)(void);
extern int (* const scePthreadCancel)(ScePthread thread);

extern int (* const scePthreadMutexInit)(ScePthreadMutex *mutex, const ScePthreadMutexattr *attr, const char *name);
extern int (* const scePthreadMutexDestroy)(ScePthreadMutex *mutex);
extern int (* const scePthreadMutexLock)(ScePthreadMutex *mutex);
extern int (* const scePthreadMutexTrylock)(ScePthreadMutex *mutex);
extern int (* const scePthreadMutexTimedlock)(ScePthreadMutex *mutex, SceKernelUseconds usec);
extern int (* const scePthreadMutexUnlock)(ScePthreadMutex *mutex);
