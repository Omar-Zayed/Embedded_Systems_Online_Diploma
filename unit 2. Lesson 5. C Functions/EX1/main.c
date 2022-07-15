#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int PrimeNumbers(int check);
int main()
{
    int i, num1, num2, prime;
    printf("Enter first integer in the interval: ");
    scanf("%d", &num1);
    printf("Enter last integer in the interval: ");
    scanf("%d", &num2);
    for(i=num1+1; i<num2; i++)
    {
        prime = PrimeNumbers(i);
        if(prime == 1 && i>1)
            printf("%d\t", i);
    }
    return 0;
}
int PrimeNumbers(int check)
{
    int prime=1, k=2;
    for(k; k<= ceil(sqrt(check)); k++)
    {
        if(check % k == 0)
        {
            prime=0;
            break;
        }
    }
    return prime;
}
