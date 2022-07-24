/*
 ============================================================================
 Name        : EX 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Find the frequency of a character in a string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	char str[100], character;
	int i, counter=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &character);

	for(i=0; i<strlen(str); i++)
	{
		if(str[i] == character)
			++counter;
	}
	printf("Frequency of %c = %d", character, counter);
	return EXIT_SUCCESS;
}
