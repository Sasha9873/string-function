#include "str_funcs.h"

int main()
{
	char str[] = "strings\n";
	char dest[] = "dest\n\0jjjjjjjjjj";

	puts(str);
	my_puts(str);
	
	printf("%p %p %p %p\n", str, strchr(str, '\n'), strchr(str, 't'), strchr(str, 'd')); 
	printf("%p %p %p %p\n", str, my_strchr(str, '\n'), my_strchr(str, 't'), my_strchr(str, 'd')); 

	printf("%s\n", my_strncat(dest, str, 3));

	char test_str[10] = "";
	printf("---------------\n");

	fgets(test_str, 3, stdin);
	puts(test_str);
	//fgets(test_str, 10, stdin);
	printf("---------------\n");
	my_fgets(test_str, 3, stdin);
	puts(test_str);
	printf("---------------\n");
//
	/**/

	return 0;
}