#include <module.h>

union module {
	const char *s;
	int id;
};

extern union module __moduleTop[];
extern union module __moduleBtm[];
extern void *__stubTop[];
extern void *__stubBtm[];

extern union module __libkernel;
int (* sceKernelLoadStartModule)(const char *name,
	size_t argc, const void *argv, unsigned int flags, int, int);

int _main(int argc, char *argv[]);

static void loadModules()
{
	union module *p;
	int id;

	loadModule(__libkernel.s, &__libkernel.id);
	getFunctionAddressByName(__libkernel.id,
		"sceKernelLoadStartModule", sceKernelLoadStartModule);

	for (p = __moduleTop; p != __moduleBtm; p++) {
		loadModule(p->s, &id);
		unloadModule(id);
		p->id = sceKernelLoadStartModule(p->s, 0, NULL, 0, 0, 0);
	}
}

static void resolveStubs()
{
	void **p;

	for (p = __stubTop; p != __stubBtm; p += 2)
		getFunctionAddressByName(*(int *)(p[0]), p[1], p);
}

int _start(int argc, char *argv[])
{
	loadModules();
	resolveStubs();
	return _main(argc, argv);
}
