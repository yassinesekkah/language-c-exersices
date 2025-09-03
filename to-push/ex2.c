#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, k;

    printf("entrez le temperature avec degre Celsius:\n");
    scanf("%.0f");

    k = c + 273.15;

    printf("le temperature avec Kelvin est: %.2f\n", k);


    return 0;
}
