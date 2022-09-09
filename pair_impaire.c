#include<stdio.h>

int main(){
    int nbr;
    printf("***********\n");
    printf("entrer un nombre de votre choix ");
    scanf("%f",&nbr);
    printf("***********\n");
    if(nbr%2==0){
        printf("nombre paire");
    }else{
        printf("nombre impaire");
    }
    }