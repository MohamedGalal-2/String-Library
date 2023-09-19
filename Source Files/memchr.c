/*Include Sections*/
#include "..\Header Files\memchr.h"

/*Function Definition Section*/
char* my_memchr(const char* str, int c, size_t n)
{
	if (NULL == str)
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (str[i] == (char)c)
			{
				return str + i;
				break;
			}
		}
	}

	return 0;
}