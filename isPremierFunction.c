#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPremier(int a){
    int i;
    //declaratio
    bool Premier = false;

    for(i=2;i<=sqrt(a);i++){
        if(a%i==0){
          Premier=true;
          break;
        }
    }
    return Premier;
}

int main()
{
  int a;
  //saisie des nombres par utilisateur a
  printf("entrer un nombre entier");
  scanf("%d",&a);
  //l'appel de la fonction isPremier pour verifier si le nombre saisie par l'utilisateur est premier ou non
  if(isPremier(a)==false)
  printf("le nombre de %d est premier ",a);
  else
  printf("le nombre de %d n'est pas premier ",a);
}