/*Function Definition Section*/
#include "..\Header Files\memmove.h"

/**
  * @brief   copy a block of memory
  * @param   str1: pointer to the destination array where the content is to be copied
  *          str2: pointer to the source of data to be copied
  *          n: number of bytes to copy
  * @return  pointer to the destination array
  */

  /*Function Definition Section*/
char* my_memmove(char* str1, const char* str2, size_t n)
{
	for (int i = 0; i < n; i++)
	{
		str1[i] = str2[i];
	}
	return str1;
}