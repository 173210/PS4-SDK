#pragma once

#include "types.h"
#include "file.h"

typedef struct DIR DIR;

extern void *(* const malloc)(size_t size);
extern void (* const free)(void *ptr);
extern void *(* const calloc)(size_t num, size_t size);
extern void *(* const realloc)(void* ptr, size_t size);
extern void *(* const memset)(void *destination, int value, size_t num);
extern void *(* const memcpy)(void *destination, const void *source, size_t num);
extern int (* const memcmp)(const void *s1, const void *s2, size_t n);
extern char *(* const strcpy)(char *destination, const char *source);
extern char *(* const strncpy)(char *destination, const char *source, size_t num);
extern char *(* const strcat)(char *dest, const char *src);
extern char *(* const strncat)(char *dest, const char *src, size_t n);
extern size_t (* const strlen)(const char *s);
extern int (* const strcmp)(const char *s1, const char *s2);
extern int (* const strncmp)(const char *s1, const char *s2, size_t n);
extern int (* const sprintf)(char *str, const char *format, ...);
extern int (* const snprintf)(char *str, size_t size, const char *format, ...);
extern int (* const sscanf)(const char *str, const char *format, ...);
extern char *(* const strchr)(const char *s, int c);
extern char *(* const strrchr)(const char *s, int c);

extern void (* const srand)(unsigned int seed);
extern int (* const rand)(void);

extern char *(* const asctime)(const struct tm *tm);
extern char *(* const asctime_r)(const struct tm *tm, char *buf);
extern char *(* const ctime)(const time_t *timep);
extern char *(* const ctime_r)(const time_t *timep, char *buf);
extern struct tm *(* const gmtime)(const time_t *timep);
extern struct tm *(* const gmtime_r)(const time_t *timep, struct tm *result);
extern struct tm *(* const localtime)(const time_t *timep);
extern struct tm *(* const localtime_r)(const time_t *timep, struct tm *result);
extern time_t (* const mktime)(struct tm *tm);

extern DIR *(* const opendir)(const char *filename);
extern struct dirent *(* const readdir)(DIR *dirp);
extern int (* const readdir_r)(DIR *dirp, struct dirent *entry, struct dirent **result);
extern long (* const telldir)(const DIR *dirp);
extern void (* const seekdir)(DIR *dirp, long loc);
extern void (* const rewinddir)(DIR *dirp);
extern int (* const closedir)(DIR *dirp);
extern int (* const dirfd)(DIR *dirp);
