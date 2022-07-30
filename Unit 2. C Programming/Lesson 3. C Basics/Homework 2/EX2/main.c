#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    if(c=='a' || c=='e' || c=='o' || c=='i' || c=='u' || c=='A' || c=='E' || c=='O' || c=='I' || c=='U')
        printf("%c is vowel", c);
    else
        printf("%c is constant", c);

    return 0;
}
