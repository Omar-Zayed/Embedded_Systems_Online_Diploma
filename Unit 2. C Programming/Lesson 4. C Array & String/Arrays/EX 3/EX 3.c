/*
 ============================================================================
 Name        : EX3.c
 Author      : Omar Zayed
 Version     :
 Copyright   : Your copyright notice
 Description : Matrix Transpose
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows, columns, i, j;
	float a[100][100], tr[100][100];
	printf("Enter rows and columns of the matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &rows, &columns);
	printf("Enter elements of matrix:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			printf("Enter elements a%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}
	printf("Entered matrix: \n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<columns; j++)
		{
			printf("%f  ", a[i][j]);
		}
		printf("\n");
	}


	for(i=0; i<rows; i++)
		{
			for(j=0; j<columns; j++)
			{
				tr[j][i] = a[i][j];
			}
		}

	printf("Transposed matrix: \n");
	for(i=0; i<columns; i++)
	{
		for(j=0; j<rows; j++)
		{
			printf("%f  ", tr[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
