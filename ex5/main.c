#include <stdio.h>
#include <stdlib.h>

int main()

{
    int t;
    printf("Entrez la temperature de l eau:\n");
    scanf("%d", &t);

    if(t<0)
    {
        printf("leau est Solide");
    }
    else if(0<=t && t<100)
    {
        printf("leau est liquide");
    }
    else
    {
        printf("leau est gaz");
    }




    return 0;
}
