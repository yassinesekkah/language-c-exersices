#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km, yards;

    printf("Entrez la distance exprimee en kilometres:\n");
    scanf("%f", &km);

    yards = km * 1093.61;

    printf("La distance en yards est: %.2f\n", yards);

    return 0;
}
