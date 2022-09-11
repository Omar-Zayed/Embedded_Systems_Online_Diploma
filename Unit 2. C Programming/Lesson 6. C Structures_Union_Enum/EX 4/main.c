/*
 ============================================================================
 Name        : EX4
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
	float m_Marks;
}student;
int main(void) {
	int counter = 0, i;
	struct SStudent arr[10];
	printf("Enter students information, maximum 10 students: \n");
	do
	{
		printf("Enter name of student%d: ", counter+1);
		fflush(stdin); fflush(stdout);
		gets(arr[counter].m_Name);
		printf("Enter marks of student%d: ", counter+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[counter].m_Marks);
		++counter;
		printf("Do you want to add more students? press 'y' for yes and 'n' for no: ");
		fflush(stdin); fflush(stdout);
		if(getchar() != 'y')
			break;
	}while(counter <= 10);
	printf("Displaying information of students: \n");
	for(i=0; i<counter; i++)
	{
		printf("Name: %s\n", arr[i].m_Name);
		printf("Marks: %f\n", arr[i].m_Marks);
	}
	return EXIT_SUCCESS;
}
