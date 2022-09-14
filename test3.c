#include <stdio.h>
#include <stdbool.h>
// on peut utiliser deux methode pour pointer sur un tableau soit a[] soit *a
void copy(char *a, char *b)
{
    // methode 1
    // *b=*a;
    // methode 2
    // on va declarer deux pointeur pour pointer sur le premier element de tableau par la suite
    char *p, *q;
    // pour cette boucle on va copier la valeur de premier tableau au deuxieme par incrementer la valeur de pointeur
    for (p = a; *p != '\0'; p++, q++)
    {
        // copier la valeur de premier element ,deuxieme ,troisieme...
        *q = *p;
    }
    // pour terminer la chaine de caractere de b
    *q = '\0';
}

int main()
{
    char b[10], a[10] = "Bonjour";
    // l'appel de la fonction copy
    //   methode 1
    //    copy(&a,&b);
    //    methode 2
    copy(a, b);
    // l'affichage de b
    printf("%s", b);
}