#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C;
    printf("entre la température en Celsius");
    scanf("%f",&C);
    if(C >= 100 )
              printf("l'eau gaz");
        else if (C < 0 )
              printf("l'eau Solide");


        else
              printf("l'eau Liquide");

    return 0;
}











