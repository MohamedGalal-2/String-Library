/*Include Sections*/
#include "..\Header Files\memchr.h"

/*Function Definition Section*/
void* my_memchr(const void* str, int c, size_t n)
{
	char* straddress = str;
	if (NULL == str)
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (straddress[i] == (char)c)
			{
				return straddress + i;
				break;
			}
		}
	}
}