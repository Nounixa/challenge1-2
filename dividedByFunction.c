#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int dividedBy(int a, int b){
    //fonction qui fait la division de deux nombre
     return a/b;
}

bool isPremier(int a){
    int i;
    //declaration d'une variable de type boolean
    bool Premier = true;
    //si le nombre enter par l'utilisateur est negatif on doit changer la signe de se nombre avant verifier si il'est premier ou non
    a*=a;
    //diviser sur tous les nombres de 2 jusqu'au la racine de a 
    for(i=2;i<=sqrt(a);i++){
        if(a%i==0){
          Premier=false;
          break;
        }
    }
    return Premier;
}

int main()
{
  int a,b;
  //saisie des nombres par utilisateur a
  printf("entrer un nombre entier");
  scanf("%d",&a);
    printf("entrer un nombre entier");
  scanf("%d",&b);
  //l'appel de la fonction isPremier pour verifier si le nombre saisie par l'utilisateur est premier ou non
  if(isPremier(dividedBy(a,b))==true)
  printf("la resultat de la division de %d et %d est premier ",a,b);
  else
  printf("la resultat de la division de %d et %d n'est pas premier ",a,b);
}