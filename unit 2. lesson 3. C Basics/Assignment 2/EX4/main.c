#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number: ");
    float num;
    scanf("%f", &num);
    if(num>0)
        printf("%0.2f is positive.", num);
    else if(num<0)
        printf("%0.2f is negative.", num);
    else
        printf("you entered zero.");
    return 0;
}
