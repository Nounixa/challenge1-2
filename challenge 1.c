#include<stdio.h>

int main(){
    char nom[20],prenom[20],sexe[10],tele[10];
    int age;
    printf("***********\n");
    printf("entrer votre nom \n");
    scanf("%s",&nom);
    printf("entrer votre prenom \n");
    scanf("%s",&prenom);
    printf("entrer votre genre \n");
    scanf("%s",&sexe);
    printf("entrer votre numero de telephone \n");
    scanf("%s",&tele);
    printf("entrer votre age \n");
    scanf("%d",&age);
    printf("***********\n");
    printf("nom:%s\nprenom:%s\ngenre:%s\nnumero de telephone:%s\nage:%d\n",nom,prenom,sexe,tele,age);
    printf("***********\n");
    }