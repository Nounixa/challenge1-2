#include<stdio.h>

int main(){
   int i,j,n;
   char Mot1[4],Mot2[4];

    printf("***********\n");
    printf("entrer un mots qui se compose de 4 caractere et ne contient que les caracteres suivantes 'a,b,c,d' \n");
    scanf("%s",&Mot1);
    printf("entrer un autre mots avec les mêmes condition \n");
    scanf("%s",&Mot2);
    printf("***********\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(Mot1[i]==Mot2[j]){
               n++;
            }
        }
    }
    if(n==4){
            printf("les deux mots sont anagramme\n");
    }else{
        printf("les deux mots ne sont pas anagramme\n");
    }

    }