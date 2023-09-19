/*Include Sections*/
#include "..\Header Files\memset.h"

/*Function Definition Section*/
int my_memset(char* str, int val, size_t n)
{
	unsigned int Retval = 0;
	if (NULL == str)
	{
		Retval = 1;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			str[i] = (char)val;
		}
	}
	return Retval;
}
