/*Include Sections*/
#include "..\Header Files\memcmp.h"

/*Function Definition Section*/
size_t my_memcmp(const char* str1, const char* str2, size_t n)
{
	int Retval = -1;

	if (NULL == (char)str1 || NULL == (char)str2)
	{
		Retval = -1;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (str1[i] != str2[i])
			{
				if (str1[i] == '\0' && str2[i] != '\0')
				{
					Retval = -1;
					break;
				}
				else if (str1[i] != '\0' && str2[i] == '\0')
				{
					Retval = 1;
					break;
				}
				else if (str1[i] != '\0' && str2[i] != '\0')
				{
					Retval = -1;
					break;
				}
			}
			else if (str1[i] == str2[i])
			{
				Retval = 0;
			}
			else
			{
				Retval = -1;
			}
		}

	}

	return Retval;
}