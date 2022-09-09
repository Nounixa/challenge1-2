#include<stdio.h>

int main(){
    float mil,km,m;
    printf("***********\n");
    printf("ce programme vous permet de transforme Mil en Km\n si vous voulez le teste entrer la valeur en Mil.\n");
    scanf("%f",&mil);
    printf("***********\n");
    km=mil/1,609;
    m=km*1000;
    printf("la valeur en Km:%.3f\n",km);
    printf("la valeur en m:%.3f\n",m);
    printf("***********\n");
    }