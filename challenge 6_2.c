#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, n, k = 0;
    char Mot1[10], Mot2[10];

    printf("***********\n");
    printf("entrer un mots qui se compose de 4 caractere et ne contient que les caracteres suivantes 'a,b,c,d' \n");
    scanf("%[^\n]%*c", &Mot1);
    printf("entrer un autre mots avec les memes condition \n");
    scanf("%[^\n]%*c", &Mot2);
    printf("***********\n");
    for (i = 0; i < strlen(Mot1); i++)
    {
            for (j = 0; j < strlen(Mot2); j++)
            {
                    if (Mot1[i] == Mot2[j])
                    {
                        n++;
                        break;
                    }
            }
    }
    if (n == strlen(Mot1))
    {
        printf("les deux mots sont anagramme\n");
    }
    else
    {
        printf("les deux mots ne sont pas anagramme\n");
    }
}