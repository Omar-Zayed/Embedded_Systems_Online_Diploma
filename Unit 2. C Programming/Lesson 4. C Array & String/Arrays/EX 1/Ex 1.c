/*
 ============================================================================
 Name        : Ex.1c
 Author      : Omar Zayed
 Version     :
 Copyright   : Your copyright notice
 Description : adding two 2D arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	float arr1[2][2], arr2[2][2];
	int i, j;
	printf("Enter the elements of 1st matrix\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &arr1[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter b%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &arr2[i][j]);
		}
	}
	printf("Sum of matrices\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
			printf("%0.1f ", arr1[i][j]+arr2[i][j]);
		printf("\n");
	}

	return EXIT_SUCCESS;
}
