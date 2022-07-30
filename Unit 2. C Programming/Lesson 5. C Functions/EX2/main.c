#include <stdio.h>
#include <stdlib.h>
int Factorial(int);
int main()
{
    int num;
    printf("Enter positive integer: ");
    scanf("%d", &num);
    if(num>=0)
        printf("Factorial of %d is %d", num, (num!=0)? Factorial(num): 1);
    else
    {
        printf("Invalid input, please enter positive integer. ");
        exit(1);
    }
    return 0;
}
int Factorial(int num)
{
    if(num !=1)
        return num * Factorial(--num);
}
