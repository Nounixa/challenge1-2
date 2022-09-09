#include<stdio.h>

int main(){
    float f,c;
    printf("***********\n");
    printf("ce programme vous permet de transforme la temperature de fahrenheit en degre Celsius\n si vous voulez le teste entrer la valeur de temperature.\n");
    scanf("%f",&f);
    printf("***********\n");
    c=(f-32)/1.8;
    printf("la temperature en degre Celsius:%.2f\n",c);
    printf("***********\n");
    }