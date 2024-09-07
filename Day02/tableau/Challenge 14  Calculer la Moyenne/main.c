#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100];
     int saize , i  ;
     int s;
     printf("entre la saize de tableau :");
    scanf("%d",&saize);
    printf("saisir des elements dans un tableau :\n");
    for(i=0;i<saize;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    s=0;
    for(i=0;i<saize;i++){
            s=s+T[i];
    }
    printf("la moyenne entre le tableau %.2f",(float) s/(float) saize);
    return 0;
}
