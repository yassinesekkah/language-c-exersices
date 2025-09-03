#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ms, kmh;

    printf("Entrez la vitesse en km/h:\n");
    scanf("%f", &kmh);

    ms = kmh * 0.27778;

    printf("La vitesse en m/s est: %.2f\n", ms);

    return 0;
}




