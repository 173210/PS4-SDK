$(eval $(call IMPORT,libc,__libSceLibcInternal,\"libSceLibcInternal.sprx\",	\
	malloc free calloc realloc memset memcpy memcmp strcpy strncpy	\
	strcat strncat strlen strcmp strncmp sprintf snprintf sscanf	\
	strchr strrchr srand rand asctime asctime_r ctime ctime_r	\
	gmtime gmtime_r localtime localtime_r mktime opendir readdir readdir_r	\
	telldir seekdir rewinddir closedir dirfd))
