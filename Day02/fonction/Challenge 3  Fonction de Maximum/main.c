#include <stdio.h>
#include <stdlib.h>
void plus_grand(int a , int b){

    if (a>b)
          printf("si  %d  plus grand",a);

    else if (b>a)
          printf("si  %d  plus grand ",b);
 }
int main()
{
    int a , b;
    printf(" entre un valeur");
    scanf("%d",&a);
    printf(" entre un valeur");
    scanf("%d",&b);
    plus_grand(a,b);
    return 0;
}
