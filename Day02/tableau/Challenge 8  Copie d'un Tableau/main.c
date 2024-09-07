#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100];
    int n , i,j=0;
    printf(" entre le sase de tableau ");
    scanf("%d",&n);
    printf("entre les elmement de tableau\n");
    for(i=0;i<n;i++){
            printf("T[%d]=",i);
            scanf("%d",&T[i]);
    }
      printf("\n");
        for(i=0;i<n;i++){
        T[j]=T[i];
         printf("T[%d]=%d\n",j, T[j]);
    j++;
        }





    return 0;
}
