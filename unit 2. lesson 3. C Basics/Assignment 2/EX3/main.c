#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x, y, z;
    printf("Enter three numbers: ");
    scanf("%f  %f  %f", &x, &y, &z);
    if(x>y && x>z)
        printf("Largest number is: %f", x);
    else if(y>x && y>z)
        printf("Largest number is: %f", y);
    else
        printf("Largest number is: %f", z);

    return 0;
}
