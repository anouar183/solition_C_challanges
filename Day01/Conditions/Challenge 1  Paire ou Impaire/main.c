#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf(" entre une nombre");
    scanf("%d",&nombre);
    if(nombre%2==0)

        printf("cest nombre %d pair ",nombre);

    else
                printf("cest nombre %d impair ",nombre);


    return 0;
}
