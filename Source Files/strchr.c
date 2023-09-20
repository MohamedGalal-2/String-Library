/*Include Sections*/
#include "..\Header Files\memchr.h"

/*Function Definition Section*/
char* my_strchr(const char* str, int c)
{
	if (NULL == str)
	{
		return 0;
	}
	else
	{
		int i = 0;
		while (str[i] != '\0')
		{
			if (str[i] == (char)c)
			{
				return (str + i);
			}
			i++;
		}
	}
}