#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*challenge 1 sur les tableau en c */
    int T[100];
    int a , i ;
    printf("entre  5  valeurS peur stoke entre le tableau\n");
    for(i=0;i<5;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    printf("\n");
    printf("si les valeur dega entre dans le tableau \n");
        for(i=0;i<5;i++){
            printf("T[%d]=%d\n",i,T[i]);

        }




    return 0;
}



