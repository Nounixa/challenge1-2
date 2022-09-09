#include <stdio.h>

int main()
{
    char c;
    printf("***********\n");
    printf("entrer un caractère de votre choix");
    scanf("%c", &c);
    printf("***********\n");

    switch (c)
    {
    case 'a':

    case 'o':

    case 'u':

    case 'i':

    case 'y':

    case 'e':
        printf("vous avez entré la voyelle %c",c);
        break;
    default:
    printf("vous avez entré une caractère qui n'est pas une voyelle",c);
        break;
    }
}