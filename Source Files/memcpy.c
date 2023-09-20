/*Include Sections*/
#include "..\Header Files\memcpy.h"

/*Function Definition Section*/
void* my_memcpy(void* dest, const void* src, size_t n)
{
	char* destaddress = dest;
	char* srcaddress = src;
	unsigned int Retval = 0;
	if (NULL == dest || NULL == src)
	{
		Retval = 1;
	}
	else
	{
		while (n--)
		{
			*destaddress++ = *srcaddress++;
		}
	}
	return destaddress;
}

