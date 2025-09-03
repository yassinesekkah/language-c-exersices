#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lon, lar;
    float surface;


    printf("Enter le longueur :\n");
    scanf("%f", &lon);

    printf("Enter le largeur :\n");
    scanf("%f", &lar);

    surface =lon * lar;

    printf("la surface d’un rectangle est: %.2f", surface);



    return 0;
}
