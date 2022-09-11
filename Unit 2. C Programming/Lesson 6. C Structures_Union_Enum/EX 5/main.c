/*
 ============================================================================
 Name        : 5-EX5
 Author      : Omar Zayed
 Version     :
 Copyright   : Your copyright notice
 Description : finding area of circles using macros
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Circle_Area(r) (M_PI*r*r)

int main(void) {
	float r;
	puts("Enter the circle radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &r);
	printf("Area= %f", Circle_Area(r));
	return EXIT_SUCCESS;
}
