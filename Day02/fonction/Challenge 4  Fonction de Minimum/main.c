#include <stdio.h>
#include <stdlib.h>
void plus_petit(int a , int b){

    if (a<b)
          printf("si  %d  plus petit",a);

    else if (b<a)
          printf("si  %d  plus petit ",b);
 }
int main()
{
    int a , b;
    printf(" entre un valeur");
    scanf("%d",&a);
    printf(" entre un valeur");
    scanf("%d",&b);
    plus_petit(a,b);
    return 0;
}
