/*Includes Section*/
#include "..\Header Files\my_string.h"

/*Main Function Section*/
int main()
{
	char* ret;
	int retval;
	char str1[51] = "Hello, World!";
	char str2[50] = "Hey What happened";
	char str5[30] = "AA";

	/*my_memset test*/
	printf("%s\n", str1);
	my_memset(str1 + 10, 'a', 15);
	printf("%s\n", str1);
	printf("----------------------------------------\n");

	/*my_memcpy test*/
	printf("%s\n", str2);
	my_memcpy(str2 + 10, str1, 15);
	printf("%s\n", str2);
	printf("----------------------------------------\n");

	/*my_memchr test*/
	ret = my_memchr(str1, 'aa', 11);
	printf("%s\n", ret);
	printf("----------------------------------------\n");

	/*my_memcmp test*/
	retval = my_memcmp("Mohamed Ahmed", "Mohamed Ahme", 15);
	printf("%d\n", retval);
	printf("----------------------------------------\n");

	/*my_strlen test*/
	retval = my_strlen("Mohamed Ahmed");
	printf("%d\n", retval);
	printf("----------------------------------------\n");

	/*my_memmove test*/
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", my_memmove(str1, str2, 10));
	printf("----------------------------------------\n");

	/*my_strcat test*/
	printf("%s\n", my_strcat(str5, str2));
	printf("%s\n", my_strcat(str1, str2));
	printf("----------------------------------------\n");

	return 0;
}





