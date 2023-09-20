/*Include Sections*/
#include "..\Header Files\memcmp.h"

/*Function Definition Section*/
int my_memcmp(const char* str1, const char* str2, size_t n)
{
	int Retval = -1;
	int str1len = 0;
	int str2len = 0;
	int strlenIndex = 0;

	while (str1[strlenIndex] != '\0')
	{
		str1len++;
		strlenIndex++;
	}
	strlenIndex = 0;
	while (str2[strlenIndex] != '\0')
	{
		str2len++;
		strlenIndex++;
	}

	if (NULL == (char)str1 || NULL == (char)str2)
	{
		Retval = -1;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (str1[i] == str2[i])
			{
				Retval = 0;
			}
			else if (str1[i] != str2[i])
			{
				if (str2len > str1len)
				{
					Retval = -1;
					break;
				}
				else if (str1len > str2len)
				{
					Retval = 1;
					break;
				}
				else if (str1[i] != '\0' && str2[i] != '\0')
				{
					if (str2len > str1len)
					{
						Retval = -1;
						break;
					}
					else if (str1len > str2len)
					{
						Retval = 1;
						break;
					}
				}
			}
			else
			{
				Retval = -1;
				break;
			}
		}
	}
	return Retval;
}