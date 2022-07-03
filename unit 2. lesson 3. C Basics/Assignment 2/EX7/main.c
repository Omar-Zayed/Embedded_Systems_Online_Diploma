#include <stdio.h>
#include <stdlib.h>
//EX6: Calculating factorial.
int main()
{
    int num, factorial=1;
    printf("Enter only a positive integer, please: ");
    scanf("%d", &num);
    if(num < 0)
    {
        printf("Error!!! Factorial of a negative number doesn't exist.");
        exit(1);
    }
    else if(num == 1)
        printf("Factorial is: 1");

    for(int i=num; i>=1; i--)
    {
        factorial*=i;
    }
    printf("Factorial is: %d", factorial);

    return 0;
}
