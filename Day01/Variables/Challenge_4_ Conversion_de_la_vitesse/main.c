#include <stdio.h>
#include <stdlib.h>

int main()
{
     float tres_par_seconde ,  kilometres_par_heure;

    printf("entre la vitesse en kilomètres par heure ");
    scanf("%f",&kilometres_par_heure);
    tres_par_seconde = kilometres_par_heure * 0.27778;
    printf("la transforme en mètres par seconde  %.3f  m/s ",tres_par_seconde );
 return 0;
}
