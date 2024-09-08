#include <stdio.h>
#include <stdlib.h>
int pair_impair (int a){
if(a%2==0)
    return 0;
    else
        return 1 ;
}
int main()
{
    int nombre;
    printf("entre une nombre");
    scanf("%d",&nombre);

    if (pair_impair(nombre)==0)
        printf("pair");
    else
        printf("impair");

    return 0;
}
