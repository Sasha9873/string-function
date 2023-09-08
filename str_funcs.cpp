#include "str_funcs.h"

int my_puts(const char* str)
{
	if(!str)
		return EOF;

	int n_sym = 0;
	while(*str)
	{
		if(putchar(*(str++)) == EOF)
			return EOF;
		++n_sym;
	}
	printf("\n");

	return n_sym;
}

char *my_strchr (const char *str, int ch)
{
	if(!str)
		return NULL;

	int i = 0;
	while(str[i] != '\0' && str[i] != ch)
		++i;

	if(str[i] == ch)
		return (char*)&(str[i]);
	else
		return NULL;
}

size_t my_strlen(const char *str)
{
	size_t str_len = 0;
	while(*str)
		++str_len;

	return str_len;
}


char *my_strcpy(char* dest, const char* src)
{
	/*if(!dest || !src)
		return NULL;*/

	char* save = dest;

	while(*src)
		*dest++ = *src++;

	*dest = *src;

	return save;
}

char *my_strncpy(char *dest, const char *src, size_t size)
{
	if(!dest || !src)
		return NULL;

	memset(dest, 0, size);

	int i = 0;
	while(src[i] && i < size)
	{
		dest[i] = src[i];
		++i;
	}

	return dest;

}


char *my_strcat(char *dest, const char *src)
{
	char* save = dest;

	for(; *dest; ++dest)
		;

	while(*dest++ = *src++)  //while != '\0'
		;

	return save;
}

char *my_strncat(char *dest, const char *src, size_t n)
{
	char* save = dest;

	for(; *dest; ++dest)
		;

	while(n-- && (*dest++ = *src++))
		;

	*dest = '\0';

	return save;
}

char *my_fgets(char *str, int size, FILE *stream)
{
	if(feof(stream) || ferror(stream))  //true if EOF
		return NULL;

	int i = 0;
	for(; i < size - 1; ++i)
	{
		int sym = getc(stream);

		if(feof(stream) || ferror(stream))
		{
			if(!i)
				return NULL;
			
			str[i] = '\0';

			return str;
		}
		else
		{
			str[i] = (char)sym;
			if(sym == '\n')
			{
				str[i] = '\n';
				str[i + 1] = '\0';
				return str;
			}

			if(sym == '\0')
				return str;
		}
	}

	str[i] = '\0';

	return str;
}

char *my_strdup(const char *str)
{
	char* new_str = (char*)malloc(my_strlen(str) + 1); 
	if(!new_str)
		return NULL;

	my_strcpy(new_str, str);

	return new_str;
}
