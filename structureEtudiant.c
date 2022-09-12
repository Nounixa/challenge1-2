#include <stdio.h>
#include <stdbool.h>


//declarer un structure pour stocker les donnees des etudiants
struct Etudiant
{
    int Age;
    char NMatricule[20];
    char nom[20];
    float note[5];
};

int main()
{
    int n,i,j,b;
    //declarer variable de type Etudiant
    struct Etudiant Etu[n];
    
    //demander a l'utilisateur d'entrer les nombres des etudiants
    printf("enter le nombre des etudiants\n");
    scanf("%d",&n);
    // demander a l'utilisateur de saisire le nombre des notes de chaque etudiant
    printf("enter le nombre des notes que vous voulez entrer par etudiant \n");
    scanf("%d",&b);
    //le role de cette boucle est de repeter le remplisage des donnees d'un etudiant n fois 
    for(i=1;i<=n;i++)
    {
        //demander à l'utilsateur de saisire les donnees de premier etudiant,deuxieme,troisieme...
        printf("enter les donnee de %d etudiant\n",i);
        printf("le nom:");
        scanf("%s",&Etu[i].nom);
        printf("l'age:");
        scanf("%d",&Etu[i].Age);
        printf("le N de matricule:");
        scanf("%s",&Etu[i].NMatricule);
        //demander à l'utilsateur de saisire les notes de cet etudiant ...
        for(j=1;j<=b;j++){
        printf("la %d note:",j);
        scanf("%f",&Etu[i].note[j]);
        }
    }

//le role de cette boucle est d'afficher les donnees de tout les etudiants
        for(i=1;i<=n;i++)
    {   printf("******************************************\n");
        printf("les donnees de l'etudiant %d\n",i);
        printf("le nom:%s\n",Etu[i].nom);
        printf("l'age:%d\n",Etu[i].Age);
        printf("le N de matricule:%s\n",Etu[i].NMatricule);
        printf("********************les notes de cet etudiant**********************\n");
        for(j=1;j<=b;j++){
        printf("la  note:%d est:%d\n",j,Etu[i].note[j]);
        }
    }

}