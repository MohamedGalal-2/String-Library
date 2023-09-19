/*Function Definition Section*/
#include "..\Header Files\memmove.h"

/*Function Definition Section*/
char* my_memmove(char* str1, const char* str2, size_t n)
{
	for (int i = 0; i < n; i++)
	{
		str1[i] = str2[i];
	}
	return str1;
}