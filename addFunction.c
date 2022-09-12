#include <stdio.h>

int add(int a,int b){
    return a+b;
}

int main()
{
  int a,b;
  printf("entrer un nombre entier");
  scanf("%d",&a);
  printf("entrer un autre nombre entier");
  scanf("%d",&b);
  printf("la somme de %d+%d=%d",a,b,add(a,b));
   
}