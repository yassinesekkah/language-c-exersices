#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Entrez un nomber n :\n");
    scanf("%d", &n);

    if(n%2 == 0)
    {
        printf("le nombre %d est pair");
    }
    else
    {
        printf("le nombre %d est impair");


    }


    return 0;
}

