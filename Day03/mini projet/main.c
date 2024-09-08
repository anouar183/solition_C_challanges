#include <stdio.h>
#include <stdlib.h>

typedef struct{
   char num[50] ;
   char nom [50];
   char email[50] ;
} persone ;


int main()
{
    int max =100;
    char of ;
    int j ;
    j=1;
    persone P[100];
    int i ;
    do{


    for(i=0 ; i<j; i++ ){

        printf("entre le nome  %d : ",i+1);
        scanf("%s",P[i].nom);

        printf("entre le NUMERO %d : ",i+1);
        scanf("%s",P[i].num);

        printf("entre le ADRESS EMAIL  %d : ",i+1);
        scanf(" %s",P[i].email);


        per:
        printf("\n");
        printf(" wax bari tzid O/F");
        scanf(" %s",&of);

       if (of == 'O') {
                if (j < max) {
                    j++;  // Increase j to add more people
                } else {
                    printf("Limite maximale atteinte!\n");
                    break;
                }
            } else if (of != 'F') {
                goto per;  // Ask again if input is not 'O' or 'F'
            }
    }




    }while(of!='F');

    for(i=0 ; i<j; i++ ){
   printf("person  %d nom %s num %s  email %s", i+1 , P[i].nom, P[i].num, P[i].email);
    }


    return 0;
}
