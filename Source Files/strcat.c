/*Include Sections*/
#include "..\Header Files\strcat.h"

/**
  * @brief   concatenate two strings
  * @param   dest: pointer to the destination array
  *          src: pointer to the source array
  * @return  pointer to the destination array
  */

  /*Function Definition Section*/
char* my_strcat(char* dest, const char* src)
{
	int destlen = 0;
	int srclen = 0;

	if (NULL == dest || NULL == src)
	{
		return 0;
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

		for (int i = 0; i < srclen; i++)
		{
			if (src[i] != '\0')
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