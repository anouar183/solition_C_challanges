#include <stdio.h>
#include <stdlib.h>
int b_somme (int a,int b){
int  somme ;
 somme=a+b ;
return somme;

}


int main()
{

    int a , b;
    printf(" entre un valeur");
    scanf("%d",&a);
    printf(" entre un valeur");
    scanf("%d",&b);
    b_somme (a,b);
    printf("si la sommme est :%d",    b_somme (a,b));



    return 0;

}










