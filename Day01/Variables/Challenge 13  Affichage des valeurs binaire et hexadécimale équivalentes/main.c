#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    int a , b ,T[100] , i = 0;
    printf(" entre une nombre :");
    scanf("%d",&nombre);
    i=0;
    do{
            a=nombre/2;
            b=nombre%2;
            T[i]=b;
            nombre=a ;


    i++;

    }while(nombre>0);

    for(i=0;i<=T[i];i++){
    printf("si  %d",T[i]);
    }
    return 0;
}
