#include <stdio.h>

void echange(int * a,int * b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}

int main()
{
  int a,b;
  //saisie des nombres par utilisateur a,b
  printf("entrer un nombre entier");
  scanf("%d",&a);
  printf("entrer un autre nombre entier");
  scanf("%d",&b);
  echange(&a,&b);
  //l'appel de la fonction echange pour echanger la valeur de a par b
  printf("la nouvelle valeur de a et b est : a=%d,b=%d",a,b);
   
}