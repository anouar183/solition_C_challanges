#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*challenge:3 SOMME SES ELEMENTS */
        int T[100];
    int S , a , i ,n;
    /*si n est variable qui dommend le size de tableau*/
    printf(" si entre le size de tableau :");
    scanf("%d",&n);
    printf("entre  %d des valeur peur stoke entre le tableau\n",n);
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    printf("\n");
    S=0;
        for(i=0;i<n;i++){
           S=S+T[i];

        }
        printf("la somme des elelment entre le tableau  est : %d", S) ;










    return 0;
}
