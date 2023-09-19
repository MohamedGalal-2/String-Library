/*Include Sections*/
#include "..\Header Files\strcat.h"

/*Function Definition Section*/
char* my_strcat(char* dest, const char* src)
{
	size_t destlen = 0;
	size_t srclen = 0;

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