/*Include Sections*/
#include "..\Header Files\memset.h"

/**
  * @brief   fill a block of memory
  * @param   str: pointer to the block of memory to fill
  *          val: value to be set
  *          n: number of bytes to be set to the value
  * @return  pointer to the block of memory
  */

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
