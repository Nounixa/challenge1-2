#include<stdio.h>
#include<math.h>

int main(){
    int i,nx,ny,mx,my;
    float mn;
    printf("***********\n");
    printf("entrer x de premier point \n");
    scanf("%d",&nx);
    printf("entrer x de premier point \n");
    scanf("%d",&ny);
    printf("entrer x de deuxieme point \n");
    scanf("%d",&mx);
    printf("entrer x de deuxieme point \n");
    scanf("%d",&my);
    mn=(float)sqrt((nx-mx)*(nx-mx)+(ny-my)*(ny-my));
    printf("moyenne de c'est quatre nombres est:%f",mn);
    printf("***********\n");
    }