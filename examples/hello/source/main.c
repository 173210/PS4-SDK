#include "ps4.h"

int _main(void) {
	// Use getpid system call
	int pid = syscall(20);
	
	
	// Return to browser
	return pid;
}
