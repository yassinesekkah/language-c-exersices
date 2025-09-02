#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    char pr;

    printf("Enter number a:\n");
    scanf("%f", &a);

    printf("Enter number b:\n");
    scanf("%f", &b);

    printf("Enter operation:\n");
    scanf(" %c", &pr);

    switch(pr)
    {
    case '+' :
        printf("%.0f + %.0f = %.0f", a, b, a+b);
        break;
    case '-':
        printf("%.0f - %.0f = %.0f", a, b, a-b);
        break;
    case '*':
        printf("%.0f * %.0f = %.2f", a, b, a*b);
        break;
    case '/':
        if(b!=0)
        {
            printf("%.2f / %.2f = %.2f", a, b, a/b);
        }
        else
        {
            printf("division par zero est impossible\n");
        }
        break;
    default:
        printf("Veuillez entrer une opération correcte (+, -, *, /):");

    }
    return 0;
}
