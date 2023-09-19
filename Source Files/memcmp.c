/*Include Sections*/
#include "..\Header Files\memcmp.h"

/*Function Definition Section*/
size_t my_memcmp(const char* str1, const char* str2, size_t n)
{
	int Retval = -1;
	int str1len = 0;
	int str2len = 0;

	if (NULL == (char)str1 || NULL == (char)str2)
	{
		Retval = -1;
	}
	else
	{
		for (int j = 0; j < n; j++)
		{
			if ('\0' == str1[j])
			{
				str1len = j;
				break;
			}
		}
		for (int j = 0; j < n; j++)
		{
			if ('\0' == str2[j])
			{
				str2len = j;
				break;
			}
		}

		for (int i = 0; i < n; i++)
		{
			if (str1[i] == str2[i] && str1len > str2len)
			{
				Retval = 1;
			}
			else if (str1[i] == str2[i] && str1len == str2len)
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