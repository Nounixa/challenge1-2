#include <stdio.h>

int main(){
    int i, j, k , a;

        printf("les donnees de l'etudiant \n");
        scanf("%d",&a);

        for ( i = a; i != 0; i--)
        {  
            for (k = 0 ; k<=i ; k++)
          {
              printf(" "); 
          }
          for (j = 0 ; j <= a-i; j++)
          {
            printf("* "); 
          }
        //   for (j = 0 ; j <= (a-i-1); j++)
        //   {
        //     printf("*"); 
        //   }
        //     for (k = 0 ; k!=i ; k++)
        //   {
        //       printf(" *"); 
        //   }
            printf("\n");
         }     

        
    return 0;
}
