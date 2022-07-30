/*
 ============================================================================
 Name        : Ex.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2;
	printf("Enter 1st number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num1);

	printf("Enter 2nd number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num2);

	num1 += num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("After swapping 1st number is: %d and 2nd number is: %d", num1, num2);
	return EXIT_SUCCESS;
}
