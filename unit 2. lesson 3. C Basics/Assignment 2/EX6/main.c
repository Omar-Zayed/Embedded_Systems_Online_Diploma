#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, Sum=0;
    printf("Enter a positive integer, please: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++)
    {
        Sum+=i;
    }
    printf("%d", Sum);
    return 0;
}
