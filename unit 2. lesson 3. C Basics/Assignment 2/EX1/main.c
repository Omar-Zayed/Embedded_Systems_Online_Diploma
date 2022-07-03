#include <stdio.h>
#include <stdlib.h>
//Check if the number is even or odd
int main()
{
    int num;
    printf("Enter an integer you want to check: ");
    scanf("%d", &num);
    if(num%2==0 && num!=0)
        printf("%d is even.", num);
    else if(num%2!=0 && num !=0)
        printf("%d is odd.", num);
    else
        printf("0 is neither even nor odd");
    return 0;
}
