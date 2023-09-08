#ifndef STR_FUNC_H
#define STR_FUNC_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_puts(const char *str);
char *my_strchr (const char *str, int ch); 
char *my_strncpy(char *dest, const char *src, size_t n);
char *my_strcpy(char* dest, const char* scr);
size_t my_strlen(const char *str);
char *my_strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src, size_t n);
char *my_fgets(char *str, int size, FILE *stream);
char *my_strdup(const char *str);

#endif
