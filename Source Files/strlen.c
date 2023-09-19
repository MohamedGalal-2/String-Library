/*Function Definition Section*/
#include "..\Header Files\strlen.h"

/*Function Definition Section*/
size_t my_strlen(const char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}