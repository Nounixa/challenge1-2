#include<stdio.h>
int main(){
    int nbr,nbrinv;
    printf("***********\n");
    printf("entrer un nombre qui se compose de trois chiffre \n");
    scanf("%d",&nbr);
    nbrinv=nbr%10;
    nbr=nbr/10;
    nbrinv=nbrinv*10+nbr%10;
    nbr=nbr/10;
    nbrinv=nbrinv*10+nbr%10;
    printf("moyenne de c'est quatre nombres est:%d",nbrinv);
    printf("***********\n");
    }