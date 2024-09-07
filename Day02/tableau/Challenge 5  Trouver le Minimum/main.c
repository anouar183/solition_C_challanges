#include <stdio.h>
#include <stdlib.h>

int main()
{

     /*challenge:4 */
        int T[100];
    int n , i ,MIN;
    /*si n est variable qui dommend le size de tableau*/
    printf(" si entre le size de tableau :");
    scanf("%d",&n);
    printf("entre  %d des valeur peur stoke entre le tableau\n",n);
    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    min = T[0];
    printf("\n");

        for(i=0;i<n;i++){
                for(i=1;i<n;i++){
                    if(MIN>T[i])
                        MIN=T[i];
                }

        }

        printf(" si le nombre minimum est : %d",min);

    return 0;
}
