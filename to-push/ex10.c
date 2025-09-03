#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    float volume;

    printf("Entrer le rayon r :\n");
    scanf("%f",&r);

    volume = (4/3)* 3.14159 * pow(r, 3);

    printf("Le volume est %.2f", volume);



    return 0;
}
