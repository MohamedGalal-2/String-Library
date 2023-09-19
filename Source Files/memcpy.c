#include <stdio.h>

unsigned int Memcpy(char str1[], char str2[], unsigned int number_of_bytes);

int main() {
	unsigned int number_of_bytes = 5;
	unsigned int offset = 0;
	char str1[50] = "Hello";
	char str2[50] = { 0 };

	printf("%s\n", str2);
	Memcpy(str2, str1, number_of_bytes);
	printf("%s\n", str2);
	return 0;
}


unsigned int Memcpy(char* str1, const char* str2, unsigned int number_of_bytes) {
	unsigned int Retval = 0;
	if (NULL == str1 || NULL == str2)
	{
		Retval = 1;
	}
	else
	{
		for (int i = 0; i < number_of_bytes; i++)
		{
			str1[i] = str2[i];
		}
	}
	return Retval;
}
