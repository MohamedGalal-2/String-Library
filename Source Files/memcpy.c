/*Include Sections*/
#include "..\Header Files\memcpy.h"

/*Function Definition Section*/
unsigned int Memcpy(char* Destination, const char* Source, unsigned int number_of_bytes) {
	unsigned int Retval = 0;
	if (NULL == Destination || NULL == Source)
	{
		Retval = 1;
	}
	else
	{
		for (int i = 0; i < number_of_bytes; i++)
		{
			Destination[i] = Source[i];
		}
	}
	return Retval;
}
