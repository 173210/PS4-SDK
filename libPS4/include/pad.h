#pragma once

extern int (* const scePadInit)(void);
extern int (* const scePadOpen)(int userID, int, int, void *);
extern int (* const scePadClose)(int handle);
extern int (* const scePadRead)(int handle, void *data, int count);
extern int (* const scePadReadState)(int handle, void *data);
