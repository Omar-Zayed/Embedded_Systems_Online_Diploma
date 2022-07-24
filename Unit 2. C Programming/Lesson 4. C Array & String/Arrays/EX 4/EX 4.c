/*
 ============================================================================
 Name        : EX 4.c
 Author      : Omar Zayed
 Version     :
 Copyright   : Your copyright notice
 Description : A program to insert an element in the array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, i,loc;
	float ins, temp;
	float arr[100];
	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	for(i=0; i<num; i++)
	{
		printf("Enter numer%d: ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
	}

	printf("Enter element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &ins);

	printf("Enter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &loc);

	for(i=num; i>=loc; i--)
		arr[i]=arr[i-1];
	arr[loc]=ins;
	for(i=0; i<=num; i++)
		printf("%0.2f   ", arr[i]);
	return EXIT_SUCCESS;

}
