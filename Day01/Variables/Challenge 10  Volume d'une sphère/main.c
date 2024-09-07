#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

  float pi = 3.14  ;

  float Volume , rayon ;

  printf( "entre le rayon en cm de sphere " );
  scanf ("%f",&rayon);

  Volume = ( (4/3) *  pi  *  ( pow (rayon,3) ) ) ;

  printf("si volume de spher est = %.2f",Volume);


    return 0;
}
