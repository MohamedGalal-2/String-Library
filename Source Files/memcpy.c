/*Include Sections*/
#include "..\Header Files\memcpy.h"

/*Function Definition Section*/
size_t my_memcpy(char* dest, const char* src, size_t n)
{
	unsigned int Retval = 0;
	if (NULL == dest || NULL == src)
	{
		Retval = 1;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return Retval;
}

