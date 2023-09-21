/*Include Sections*/
#include "..\Header Files\strncat.h"

/**
  * @brief   concatenate two strings
  * @param   dest: pointer to the destination array
  *          src: pointer to the source array
  *          n: number of characters to be concatenated
  * @return  pointer to the destination array
  */

  /*Function Definition Section*/
char* my_strncat(char* dest, const char* src, size_t n)
{
	size_t destlen = 0;
	size_t srclen = 0;

	if (NULL == dest || NULL == src)
	{
		dest = 0;
	}
	else
	{
		while (dest[destlen] != '\0')
		{
			destlen++;
		}
		while (src[srclen] != '\0')
		{
			srclen++;
		}

		int i = 0;
		for (int i = 0; i < n; i++)
		{
			if (i < n)
			{
				dest[destlen + i] = src[i];
			}
			else
			{
				break;
			}
		}
	}

	return dest;
}