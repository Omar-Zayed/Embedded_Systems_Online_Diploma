/*
 ============================================================================
 Name        : strlen.c
 Author      : Omar Zayed
 Version     :
 Copyright   : Your copyright notice
 Description : Finding length of a program
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[1000];
	int i, counter=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);
	for(i=0; i<100; i++)
	{
		if(str[i] != '\0')
			++counter;
		else
			break;
	}
	printf("Length of string = %d\n", counter);
	return EXIT_SUCCESS;
}
