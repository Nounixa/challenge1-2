#include <stdio.h>

int main(){
    int i, j, k , a;

        printf("les donnees de l'etudiant \n");
        scanf("%d",&a);

        for ( i = a; i <= 0; i--)
        {  
            for (k = i/2 ; k<=0 ; k--)
           {
               printf("\t"); 
           }
           for (j = 0 ; j <= i; j++)
           {
            printf("*"); 
           }
            printf("\n");
         }          
        
    return 0;
}