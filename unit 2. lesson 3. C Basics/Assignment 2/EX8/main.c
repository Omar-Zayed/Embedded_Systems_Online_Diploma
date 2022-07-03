#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation;
    float op1, op2;
    printf("Enter operation either + or - or * or /: ");
    scanf("%c", &operation);

    printf("Enter two operands(space-separated): ");
    scanf("%f %f", &op1, &op2);

    switch(operation)
    {
    case '+':
        printf("%0.1f %c %0.1f = %0.1f", op1, operation, op2, op1+op2);
        break;
    case '-':
        printf("%0.1f %c %0.1f = %0.1f", op1, operation, op2, op1-op2);
        break;
    case '*':
        printf("%0.1f %c %0.1f = %0.1f", op1, operation, op2, op1*op2);
        break;
    case '/':
        printf("%0.1f %c %0.1f = %0.1f", op1, operation, op2, op1/op2);
        break;
    }
    return 0;
}
