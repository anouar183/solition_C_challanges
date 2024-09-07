#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100];
     int saize , i , RP ,NV ;
     printf("entre la saize de tableau :");
    scanf("%d",&saize);
    printf("saisir des elements dans un tableau :\n");
    for(i=0;i<saize;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    printf("entre la   valeur a remplacer:");
    scanf("%d",&RP);
    printf("entre la  nouvelle valeur:");
    scanf("%d",&NV);
    for(i=0;i<saize;i++){
            if(T[i]==RP+1){
                T[i]=NV;
            }
            printf("T[%d]=%d\n",i,T[i]);

    }







    return 0;
}
