#include <stdio.h>
#include <stdbool.h>

struct structureEtudiant
{
    int Age;
    char NMatricule[20];
    char nom[20];
    float note[];
};

int main()
{
    int n,i,j,b;
    struct structureEtudiant Etu;
    

    printf("enter le nombre des etudiants\n");
    scanf("%d",n);
    for(i=1;i<=n;i++)
    {
        printf("enter les donnee de %d etudiant\n",i);
        printf("le nom:");
        scanf("%s",Etu.nom);
        printf("l'age:");
        scanf("%d",Etu.Age);
        printf("le N° de matricule:");
        scanf("%s",Etu.NMatricule);
        for(j=1;j<=b;j++){
        printf("la %d note:",j);
        scanf("%d",Etu.note);
        }

    }
}