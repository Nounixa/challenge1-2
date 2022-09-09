#include<stdio.h>
#include<math.h>

int main(){
    int i,nbr,som,n;
    float moy;
    printf("entrer le nombre des valeur que vous voulez calculer");
    scanf("%d",&n);
    printf("***********\n");
    som=0;
    for(i=1;i<=n;i++){
    printf("entrer le %d nombre \n",i);
    scanf("%d",&nbr);
    som=som+nbr;
    }
    moy=(float)som/n;
    printf("moyenne de c'est quatre nombres est:%f",moy);
    printf("***********\n");
    }