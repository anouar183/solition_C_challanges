#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    int Tresultat[10],T[10];
    int i , Somme;

    printf( "entre les elemesnt de tableau");
    for(i=0;i<10;i++){
        printf("T[%d] = " ,i ) ;
        scanf("%d",&T[i] );
    }
    Somme = 0;
    for(i=0;i<10;i++){
        if(T[i]%3==0 || T[i]%5==0)
            Tresultat[i] = T[i] ;

        Somme = Somme + Tresultat[i] ;

    }
    printf("la somme = %d ",Somme);

    return 0;
}
