/*Include Sections*/
#include "..\Header Files\memset.h"

/*Function Definition Section*/
unsigned int Memset(char* str, unsigned char val, unsigned int number_of_bytes) {
	unsigned int Retval = 0;
	if (NULL == str)
	{
		Retval = 1;
	}
	else
	{
		for (int i = 0; i < number_of_bytes; i++)
		{
			str[i] = val;
		}
	}
	return Retval;
}
