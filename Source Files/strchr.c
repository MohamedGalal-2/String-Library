/*Include Sections*/
#include "..\Header Files\memchr.h"

/**
  * @brief   search for a character in a string
  * @param   str: string to be searched
  *          c: character to be searched
  *          n: number of characters to be searched
  * @return  string after the character : if the character is found
  *          NULL : if the character is not found
  */

  /*Function Definition Section*/
char* my_strchr(const char* str, int c)
{
	if (NULL == str)
	{
		return 0;
	}
	else
	{
		int i = 0;
		while (str[i] != '\0')
		{
			if (str[i] == (char)c)
			{
				return (str + i);
			}
			i++;
		}
	}
}