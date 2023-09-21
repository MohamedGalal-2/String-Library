/*Function Definition Section*/
#include "..\Header Files\strlen.h"

/**
  * @brief   calculate the length of a string
  * @param   str: pointer to the string
  * @return  length of the string
  */

  /*Function Definition Section*/
int my_strlen(const char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}