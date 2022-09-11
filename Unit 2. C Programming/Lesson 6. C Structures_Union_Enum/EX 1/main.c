/*
 ============================================================================
 Name        : Store.c
 Author      : Omar Zayed
 Version     :
 Copyright   : Your copyright notice
 Description : Store Information using struct
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SStudent
{
	char m_Name[50];
	int m_Roll_Number;
	float m_Marks;
}student;

void read_info()
{
	printf("Enter your name: ");
	fflush(stdin); fflush(stdout);
	scanf("%s", &student.m_Name);

	printf("Enter your roll number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &student.m_Roll_Number);

	printf("Enter your marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &student.m_Marks);
}

void print_info()
{
	printf("Your name is: %s\n", student.m_Name);
	printf("Your roll number is: %d\n", student.m_Roll_Number);
	printf("Your marks are: %f", student.m_Marks);
}

int main(void) {
	read_info();
	printf("Displaying information: \n");
	print_info();
	return EXIT_SUCCESS;
}
