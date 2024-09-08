#include <stdio.h>
#include <stdlib.h>
int b_prodoie (int a,int b){
int prodoie=1 ;
 prodoie=a*b ;
return prodoie;

}



int main()
{

    int a , b;
    printf(" entre un valeur");
    scanf("%d",&a);
    printf(" entre un valeur");
    scanf("%d",&b);
    b_prodoie (a,b);
    printf("si la prodoie est :%d",b_prodoie(a,b));




    return 0;
}
