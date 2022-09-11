/*
 ============================================================================
 Name        : 2- Adding two distances in (inch-feet) system using structures
 Author      : Omar Zayed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SDistances
{
	float m_Inch;
	float m_Feet;
};

struct SDistances Read(char distance[])
{
	struct SDistances dist;
	printf("Enter %s ex: (inches, feet): ", distance);
	fflush(stdin); fflush(stdout);
	scanf("%f, %f", &dist.m_Inch, &dist.m_Feet);
	return dist;
}

struct SDistances Sum(struct SDistances dist1, struct SDistances dist2)
{
	struct SDistances sum;
	sum.m_Inch = dist1.m_Inch + dist2.m_Inch;
	sum.m_Feet = dist1.m_Feet + dist2.m_Feet;
	return sum;
}

void Print(struct SDistances sum)
{
	printf("Sum of distances(inches) = %f and Sum of distances(feets) = %f ", sum.m_Inch, sum.m_Feet);
}
int main(void) {
	struct SDistances dist1, dist2, sum;
	dist1 = Read("distance_1");
	dist2 = Read("distance_2");
	sum = Sum(dist1, dist2);
	Print(sum);
	return EXIT_SUCCESS;
}
