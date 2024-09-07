#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*challenge:2 saise et affichge des elements */
        int T[100];
    int n , a , i ;
    /*si n est variable qui dommend le size de tableau*/
    printf(" si entre le size de tableau :");
    scanf("%d",&n);
    printf("entre  %d des valeur peur stoke entre le tableau\n",n);
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    printf("\n");
    printf("si les valeur dega entre dans le tableau \n");
        for(i=0;i<n;i++){
            printf("T[%d]=%d\n",i,T[i]);

        }

    return 0;
}
