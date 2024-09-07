#include <stdio.h>
#include <stdlib.h>

int main()
{
     int T[100];
    int    a,i , n;
    /*challange 6 */
    printf(" si entre le size de tableau :");
    scanf("%d",&n);
    printf("entre  %d des valeur peur stoke entre le tableau\n",n);

    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    printf(" si entre le fV  :");
    scanf("%d",&a);
    printf("\n");
    printf("si le pv de %d");
        for(i=0;i<n;i++){
                printf("si le fv est : T[%d]=%d\n",i,a*T[i]);
        }







    return 0;
}
