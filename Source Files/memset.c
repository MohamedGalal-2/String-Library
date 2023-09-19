#include <stdio.h>

unsigned int Memset(char str[], unsigned char val, unsigned int number_of_bytes);

int main() {

	char str[50] = "Hello";

	Memset(str + 5, '+', 15);
	Memset(str + 20, '!', 15);
	printf("%s", str);
	return 0;
}

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
