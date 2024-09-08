#include <stdio.h>
#include <stdlib.h>
int Fibonacci(int a){
    int FR=0;
    int i;
    int p=1;
    i=1;
do{
        FR=i+p;
        p=i;
        i=FR;
        FR=i;

}while(i<a);

return FR;
}

int main()
{
    int a;
    printf("entre une valeur");
    scanf("%d",&a);
    printf("%d",Fibonacci(a));

    return 0;
}
