#include<stdio.h>

int main(){
    float f,c;
    printf("***********\n");
    printf("ce programme vous permet de transforme la temperature degre Celsius de en fahrenheit \n si vous voulez le teste entrer la valeur de temperature en degre celsius.\n");
    scanf("%f",&c);
    printf("***********\n");
    f=(c*1.8)+32;
    printf("la temperature en degre Celsius:%.2f\n",f);
    printf("***********\n");
    if(c<0){
        printf("tres froid");
    }else if(c>=0 && c<=30){
        printf("froid");
    }else if(c>30 && c<=40){
        printf("chaud");
    }else{
    printf("tres chaud");
    }
    }