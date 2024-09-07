#include <stdio.h>
#include <stdlib.h>

int main()
{
     int T[100];
     int saize , i , ER , P=0;
     printf("entre la saize de tableau :");
    scanf("%d",&saize);
    printf("saisir des elements dans un tableau :\n");
    for(i=0;i<saize;i++){
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    printf("entre l'élément à rechercher :");
    scanf("%d",&ER);
    for(i=0;i<=saize;i++){
        if(ER==T[i]){
            P=1;
            break;
    }

        else if(ER!=T[i])
        P=0;

    }
    if(P==1)
        printf("c'est elemen présent  entre le tableau");
    else if(P==0)
        printf("c'est elemen absent entre le tableau");

    return 0;
}
