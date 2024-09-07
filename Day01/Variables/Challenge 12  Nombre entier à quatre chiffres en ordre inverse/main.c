#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbre ;
    int resultat ;
    printf( " entre une numbre " );
    scanf("%d",&numbre);
     resultat = (numbre % 10)*1000 ;
     resultat = resultat + ((( numbre /10) % 10) * 100  );
     resultat = resultat + (((numbre / 100) % 10) *10  );
     resultat = resultat + ( numbre / 1000);
    printf("%d",resultat);


    return 0;
}
