/*Function Definition Section*/
#include "..\Header Files\strcmp.h"

/**
  * @brief   compare two strings
  * @param   str1: pointer to the first string to be compared
  *          str2: pointer to the second string to be compared
  * @return  0 : if both strings are equal
  *          1 : if the first character that does not match has a greater value in str1 than in str2
  *         -1 : if the first character that does not match has a greater value in str2 than in str1
  */

  /*Function Definition Section*/
int my_strcmp(const char* str1, const char* str2)
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

	int index = 0;
	index = (str1len > str2len) ? str1len : str2len;

	if (NULL == (char)str1 || NULL == (char)str2)
	{
		Retval = -1;
	}
	else
	{
		for (int i = 0; i < index; i++)
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