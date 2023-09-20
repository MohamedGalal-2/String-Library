/*Function Definition Section*/
#include "..\Header Files\strlen.h"

/*Function Definition Section*/
int my_strlen(const char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i = 0;
	return i;
}