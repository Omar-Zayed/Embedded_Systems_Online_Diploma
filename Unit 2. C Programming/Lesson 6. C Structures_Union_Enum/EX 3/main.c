/*
 ============================================================================
 Name        : 3-Adding two numbers with structure
 Author      : Omar Zayed
 Version     :
 Copyright   : Your copyright notice
 Description : Adding two numbers with structure
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct SComplex
{
	float m_Real;
	float m_Img;
};
struct SComplex Read(char cmplx[])
{
	struct SComplex complex;
	printf("Enter real and imaginary respectively of %s: ", cmplx);
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &complex.m_Real, &complex.m_Img);
	return complex;
}
struct SComplex Addition(struct SComplex complex_1, struct SComplex complex_2)
{
	struct SComplex complex;
	complex.m_Real = complex_1.m_Real + complex_2.m_Real;
	complex.m_Img = complex_1.m_Img + complex_2.m_Img;
	return complex;
}
void Printing_Summition(struct SComplex sum)
{
	printf("Sum = %0.2f + i%0.2f", sum.m_Real, sum.m_Img);
}
int main(void) {
	struct SComplex complex_1, complex_2, sum;
	complex_1 = Read("1st complex");
	complex_2 = Read("2nd complex");
	sum = Addition(complex_1, complex_2);
	Printing_Summition(sum);
	return EXIT_SUCCESS;
}
