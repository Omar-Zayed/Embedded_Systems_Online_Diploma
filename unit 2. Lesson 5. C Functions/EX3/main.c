#include <stdio.h>
#include <stdlib.h>
void StringReverse();
int main()
{
    printf("Enter a string to reverse: ");
    StringReverse();
    return 0;
}
void StringReverse()
{
    char character;
    scanf("%c", &character);
    if(character != '\n')
    {
        StringReverse();
        printf("%c", character);
    }
}

