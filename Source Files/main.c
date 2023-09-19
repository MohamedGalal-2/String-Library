/*Includes Section*/
#include "..\Header Files\my_string.h"
#include <string.h>
/*Main Function Section*/
int main()
{
	char* ret;
	int retval;
	char str1[51] = "Hello, World!";
	char str2[50] = "Hey What happened";

	printf("%s\n", str1);
	my_memset(str1 + 10, 'a', 15);
	printf("%s\n", str1);

	printf("%s\n", str2);
	my_memcpy(str2 + 10, str1, 15);
	printf("%s\n", str2);


	ret = my_memchr(str1, 'aa', 11);
	printf("%s\n", ret);

	retval = my_memcmp("Mohamed Ahmed", "Mohamed Ahme", 15);
	printf("%d\n", retval);
	return 0;
}



