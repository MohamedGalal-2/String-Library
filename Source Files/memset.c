/*Include Sections*/
#include "..\Header Files\memset.h"

/*Function Definition Section*/
void* my_memset(void* str, int val, size_t n)
{
	char* ptr = str;
	unsigned int Retval = 0;
	if (NULL == str)
	{
		return 0;
	}
	else
	{
		while (n--)
		{
			*ptr++ = (char)val;
		}
	}
	return str;
}
