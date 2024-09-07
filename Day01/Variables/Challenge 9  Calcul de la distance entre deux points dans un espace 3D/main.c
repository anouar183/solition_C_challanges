#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sisie (){
   float  x ,  x1  , x2  ;
   float  y ,  y1  , y2   ;
   float  z ,  z1  , z2   ;

   printf( " entra x1  x2 :  " ) ;
   scanf( "%f%f",&x1, & x2 );

   printf( " entra y1  y2 :  " ) ;
   scanf("%f %f ",&y1, & y2 );

   printf( " entra z1  z2 :  " ) ;
   scanf("%f %f ",&z1, & z2 );

   x= pow((x2-x1),2);

   y= pow((y2-y1),2);

   z= pow((z2-z1),2);

   /* clacule de distance */
    return sqrt( x + y + z );
}

int main()
{
    float Distance ;

    Distance=sisie();

    printf("si la Distance = %.2f",Distance);
    return 0;
}
