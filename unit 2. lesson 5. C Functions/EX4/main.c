#include <stdio.h>
#include <stdlib.h>
int POWER_FUNCTION(int num, int power)
{
    if(power > 0)
        return num * POWER_FUNCTION(num, --power);
    else
        return 1;
}int main()
{
    int num, power;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Enter a positive power: ");
    scanf("%d", &power);
    printf("%d", POWER_FUNCTION(num, power));
    return 0;
}

