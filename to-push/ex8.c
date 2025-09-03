#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, moyenne;
    printf("entrez un nombre a:\\n");
    scanf("%f", &a);

    printf("entrez un nombre b:\\n");
    scanf("%f", &b);

    printf("entrez un nombre c:\\n");
    scanf("%f", &c);

    moyenne = cbrt(a*b*c);

    printf("la moyenne geometrique est: %.2f", moyenne);

    return 0;
}
