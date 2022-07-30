#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter a character: ");
    char c;
    scanf("%c", &c);
    if(c>=65 && c<=122)
        printf("%c is alphabet", c);
    else
        printf("%c is not alphabet", c);
    return 0;
}
