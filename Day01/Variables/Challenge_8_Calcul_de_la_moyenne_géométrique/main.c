#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    float P_1 , P_2 , P_3 ;
    printf(" entre le 1er nombre :");
    scanf("%f",&P_1);
    printf(" entre le 2ème nombre :");
    scanf("%f",&P_2);
    printf(" entre le 3ème nombre :");
    scanf("%f",&P_3);

    printf("\n Moyenne géométrique est : %.2f",pow((P_1 + P_2 + P_3),(1/3)));


    return 0;
}




