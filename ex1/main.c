#include <stdio.h>
#include <stdlib.h>

int main()

{
    char name[50];
    char firstname[50];
    char sex[50];
    char email[50];
    int age;

    printf("Enter your name:\n");
    scanf("%49s", &name);

    printf("Enter your firstname:\n");
    scanf("%49s", &firstname);

    printf("Enter your sex:\n");
    scanf("%49s", &sex);

    printf("Enter your email:\n");
    scanf("%49s", &email);

    printf("Enter your age:\n");
    scanf("%d", &age);

    printf("Name: %s \nFirst name: %s \nSex: %s\nEmail: %s \nAge: %d", name, firstname, sex, email, age);



    return 0;
}
