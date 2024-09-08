#include <stdio.h>
#include <stdlib.h>
int factorielle(int a ){
    int p=a;
    int i;
    for(i=1;i<a;i++)
      p=p*i;
      return p;
 }
int main()
{
    int a , b;
    printf(" entre un valeur");
    scanf("%d",&a);
    if(a==0)
    printf("factorielle de 0 est 1 ");
    else
    printf("factorielle de %d ad est %d ",a,factorielle(a));
    return 0;
}
