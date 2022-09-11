/*
 ============================================================================
 Name        : 6- EX6 (struct)
 Author      : Omar Zayed
 Version     :
 Copyright   : Your copyright notice
 Description : Print the output size of union = 32 and size of structure = 40
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SData
{
	union NUMData
	{
		char ch[32];
	};
	int x;
	float y;
};
int main(void) {
	printf("Size of union = %d\n", sizeof(union NUMData));
	printf("Size of struct = %d", sizeof(struct SData));
	return EXIT_SUCCESS;
}
