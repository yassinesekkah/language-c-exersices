#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2, z1, z2, distance;
    printf("Enter les cordonnees du premier point:\n");
    scanf("%lf %lf %lf", &x1, &y1, &z1);

    printf("Enter les cordonnees du deuxieme point:\n");
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2) + pow(z2-z1, 2));

    printf("la distance entre les deux points est: %.4lf", distance);

    return 0;
}
