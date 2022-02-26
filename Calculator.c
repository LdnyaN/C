#include<stdio.h>
int main()
{
    int a, b;
    char op;
    float result;
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);
    printf("Enter Operater What Do You Want:");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        result=a+b;
        printf("The Sum is: %f", result);
        break;
    case '-':
        result=a-b;
        printf("The Subtract is:  %f", result);
        break;
    case '*':
        result=a*b;
        printf("The Multiply is: %f", result);
        break;
    case '/':
        result=a/b;
        printf("The Division is: %f", result);
        break;
    case '%':
        result=a%b;
        printf("The remainder is: %f", result);
        break;
        default:
    printf("Please Enter a valid Operater");
        break;
    }
}
