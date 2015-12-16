#include "syscall.h"
#include "kernel.h"

#include "module.h"

SYSCALL(getFunctionAddressByName, 591);
SYSCALL(getLoadedModules, 592);

int getModuleInfo(int loadedModuleID, struct moduleInfo *destination) {
	destination->size = sizeof(*destination);
	return syscall(593, loadedModuleID, destination);
}

int loadModule(const char *name, int *idDestination) {
	return syscall(594, name, 0, idDestination, 0);
}

int unloadModule(int id) {
	return syscall(595, id, 0, 0);
}
