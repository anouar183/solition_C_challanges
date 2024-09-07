#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largeur , longueur ;
    float Surface ;

    printf( " entre la longueur de rectangle " ) ;
    scanf("%f",&longueur);

    printf( " entre la largeur de rectangle " ) ;
    scanf("%f",&largeur);

    Surface = longueur * largeur ;

    printf(" si la Surface de rectangle = %.2f",Surface);

    return 0;
}
