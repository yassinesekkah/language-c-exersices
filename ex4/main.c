#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ms, kmh;

    printf("Entrez la vitess en km/h:\n");
    scanf("%f", &kmh);

    ms = kmh * 0.27778;

    printf("La vitess en m/s est: %.2f\n", ms);

    return 0;
}




