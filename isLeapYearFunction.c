#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int a){
    //declaration d'une variable de type boolean
    bool Premier = false;
    //verifie si l'annee est divisible par 4 ou par 400
   if((a%4==0 && a%100!=0)||a%400==0){
       Premier=true;
   }
    return Premier;
}

int main()
{
  int annee;
  //saisie de l'annee par utilisateur 
  printf("entrer un nombre entier");
  scanf("%d",&annee);
  //l'appel de la fonction is_leap_year pour verifier si l'annee saisie par l'utilisateur est bissextile ou non
  if(is_leap_year(annee)==true)
  printf("l'annee %d est bissextile ",annee);
  else
  printf("l'annee %d n'est pas bissextile ",annee);
  }