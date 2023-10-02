# String Library
This repository contains a simple string library written in C. It provides several useful functions for string manipulation.

## Table of Contents
* Installation
* Usage
* Functions
* Contributing
* License

### Installation

To use this library in your project, you can clone this repository or download the necessary files.

git clone https://github.com/MohamedGalal-2/String-Library.git
Afterwards, you need to include the string.h header file in your C code and link with the library during compilation.

#include "string.h"

### Usage
Once you have included the string.h header file, you can start utilizing the library's functions to perform various string operations.

### Functions
This library provides the following functions for string manipulation:

my_memchr: Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.
my_memcmp: Compares the first n bytes of str1 and str2.
my_memcpy: Copies n characters from src to dest.
my_memmove: Another function to copy n characters from str2 to str1.
my_memset: Copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str.
my_strcat: Appends the string pointed to, by src to the end of the string pointed to by dest.
my_strchr: Searches for the first occurrence of the character c (an unsigned char) in the string pointed to, by the argument str.
my_strcmp: Compares the string pointed to, by str1 to the string pointed to by str2.
my_strlen: Computes the length of the string str up to but not including the terminating null character.
my_strncat: Appends the string pointed to, by src to the end of the string pointed to, by dest up to n characters long.
For more detailed information on each function, refer to the comments in the string.c file.

### Contributing
Contributions to this library are always welcome! If you have any suggestions, bug fixes, or additional functions to add, please feel free to create a pull request.

### License
This project contains my own implementation for the string library in C. Feel free to use for any purpose.
