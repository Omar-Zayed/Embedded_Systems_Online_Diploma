#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, product;
    printf("Enter two numbers: ");
    scanf("%f %f",&num1,&num2);        /* Stores the two floating point numbers entered by user in variable num1 and num2 respectively */
    product = num1*num2;  /* Performs multiplication and stores it */
    printf("Product: %f",product);

    return 0;
}
