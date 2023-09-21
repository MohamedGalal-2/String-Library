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
void* my_memchr(const void* str, int c, size_t n)
{
	char* straddress = str;
	if (NULL == str)
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (straddress[i] == (char)c)
			{
				return straddress + i;
				break;
			}
		}
	}
}