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
    printf(" les elements pairs entre tableau\n ");
    for(i=0;i<saize;i++){
        if(T[i]%2==0){
            printf("T[%d]=%d\n",i,T[i]);
        }

    }
    return 0;
}
