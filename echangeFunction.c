#include <stdio.h>

int echange(int a,int b){
    a=b;
    return a;
}

int main()
{
  int a,b;
  //saisie des nombres par utilisateur a,b
  printf("entrer un nombre entier");
  scanf("%d",&a);
  printf("entrer un autre nombre entier");
  scanf("%d",&b);
  //l'appel de la fonction echange pour echanger la valeur de a par b
  printf("la nouvelle valeur de a est : %d ",echange(a,b));
   
}