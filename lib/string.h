#ifndef _STRING_H
#define _STRING_H

#include <string.h>

extern char *strdup(const char *s);
extern char *strndup(const char *s, size_t n);
extern void *memcpy(void *dest, const void *src, size_t n);
extern int strcmp(const char *s1, const char *s2);
extern int strncmp(const char *s1, const char *s2, size_t n);
extern void *memset(void *s, int c, size_t n);
extern char *strchr(const char *s, int c);
extern char *strrchr(const char *s, int c);
extern size_t strlen(const char *s);
extern char *strstr(const char *s1, const char *s2);
extern int memcmp(const void *s1, const void *s2, size_t n);


#endif /* _STRING_H */
