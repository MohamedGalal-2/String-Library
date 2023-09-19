#include <stdio.h>

unsigned int Memset(char* str, unsigned char val, unsigned int number_of_bytes);

int main() {
	unsigned char val;
	unsigned int number_of_bytes;
	unsigned int offset = 0;
	char str[50] = "Hello";
	printf("Enter the character to be filled: ");
	scanf("%c", &val);
	printf("Enter the number of bytes to be filled: ");
	scanf("%i", &number_of_bytes);
	printf("Enter the offset you want to start filling from: ");
	scanf("%i", &offset);
	Memset(str, val, number_of_bytes, offset);
	printf("%s", str);
	return 0;
}


unsigned int Memset(char str[], unsigned char val, unsigned int number_of_bytes, unsigned int offset) {
	unsigned int Retval = 0;
	if (NULL == str)
	{
		Retval = 1;
	}
	else
	{
		for (int i = 0; i < number_of_bytes; i++)
		{
			str[i + offset] = val;
		}
	}
	return Retval;
}
