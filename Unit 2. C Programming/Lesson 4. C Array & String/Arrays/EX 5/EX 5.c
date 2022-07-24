/*
 ============================================================================
 Name        : EX 4.c
 Author      : Omar Zayed
 Version     :
 Copyright   : Your copyright notice
 Description : A program to search an element in the array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int nums, i, count=0;
	float x;
	float arr[100];
	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &nums);
	for(i=0; i<nums; i++)
	{
		printf("Enter numer%d: ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
	}

	printf("Enter number to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &x);

	for(i=0; i<nums; i++)
	{
		if(arr[i]==x)
		{
			printf("Number found at the location: %d", i+1);
			count =1;
		}

	}
	if(count !=1)
		printf("Number can't be found at any location.");

	return EXIT_SUCCESS;

}
