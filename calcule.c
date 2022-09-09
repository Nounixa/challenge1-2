#include<stdio.h>

int main(){
    int a,b,res;
    float pd,div,dif,som;

    printf("***********\n");
    printf("entrer le premier nombre \n");
    scanf("%d",&a);
    printf("entrer le deuxieme nombre \n");
    scanf("%d",&b);
    printf("***********\n");
    pd=a*b;
    dif=a-b;
    som=a+b;
     if(b=0){
        printf("imposible d'avoir une solution pour la division ou avoir le reste de division");
    }else{
        res =a%b;
            printf("a modulo b= %.2d\n",res);
            printf("a/b=%.2f\n",a / b);
    }
    printf("a+b=%.2f\n",som);
    printf("a-b=%.2f\n",dif);
    printf("a*b=%.2f\n",pd); 
    printf("***********\n");
    }