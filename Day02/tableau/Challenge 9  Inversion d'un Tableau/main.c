#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TE[100] ,TG[100];
    int saize , i;
    printf("entre la saize de tableau :");
    scanf("%d",&saize);
    printf("saisir des elements dans un tableau :");
    for(i=0;i<=saize;i++){
        printf("T[%d]=",i);
        scanf("%d",&TE[i]);
    }
    for(i=0;i<=saize;i++){
        TG[saize-i]=TE[i];
    }
     printf("inverse les éléments d'un tableau \n");
     for(i=0;i<=saize;i++){
         printf("TS[%d]=%d \n ",i,TG[i]);
     }







    return 0;
}
