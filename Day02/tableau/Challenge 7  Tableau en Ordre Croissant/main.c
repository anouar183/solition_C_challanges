#include <stdio.h>
#include <stdlib.h>

int main()
{

    int T[100] ;
    int n , i ,j,a;
    /*si n est variable qui dommend le size de tableau*/
    printf(" si entre le size de tableau :");
    scanf("%d",&n);
    printf("entre  %d des valeur peur stoke entre le tableau\n",n);

    for(i=0;i<n;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }

    printf("\n");

        for(i=0;i<n;i++){
                for(j=i+1;j<n;j++){
                    if(T[i]>T[i]){
                       a=T[i];
                       T[i]=T[j];
                       T[j]=a;
                }
        }
        }
        printf("\n les elements du tableau par ordre croissant sont");
        for(i=0;i<8;i++)
        printf("%d\n",T[i]);

    return 0;
}
