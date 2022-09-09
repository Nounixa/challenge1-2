#include<stdio.h>

int main(){
    float mil,km;
    printf("***********\n");
    printf("ce programme vous permet de transforme Km en Mil\n si vous voulez le teste entrer la valeur en Km.\n");
    scanf("%f",&km);
    printf("***********\n");
    mil=km*1,609;
    printf("la valeur en Km:%.3f\n",mil);
    printf("***********\n");
    }