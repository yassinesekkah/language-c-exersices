#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, moyene;

    printf("entree nombre a:\n");
    scanf("%d", &a);

    printf("entree nombre b:\n");
    scanf("%d", &b);

    printf("entree nombre c:\n");
    scanf("%d", &c);

    moyene = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);

    printf("moyen is %d", moyene);

    return 0;
}
