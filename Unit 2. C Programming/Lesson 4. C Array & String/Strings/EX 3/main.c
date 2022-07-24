/*
 ============================================================================
 Name        : Midterm code 8.c
 Author      : Omar Zayed
 Version     :
 Copyright   : Your copyright notice
 Description : A C function to take an array and reverse its elements =======
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Reverse(char arr[], int size)
{
	int i;
	printf("Reversed string \n");
	for(i=size-1; i>=0; i--)
	{
		printf("%c", arr[i]);
	}

	return 0;
}
int main(void) {
	char arr[100];
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(arr);
	Reverse(arr, strlen(arr));
	return EXIT_SUCCESS;
}
