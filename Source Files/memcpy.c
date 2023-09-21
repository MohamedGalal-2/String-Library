/*Include Sections*/
#include "..\Header Files\memcpy.h"

/**
  * @brief   copy a block of memory
  * @param   dest: pointer to the destination array where the content is to be copied
  *          src: pointer to the source of data to be copied
  *          n: number of bytes to copy
  * @return  pointer to the destination array
  */

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

