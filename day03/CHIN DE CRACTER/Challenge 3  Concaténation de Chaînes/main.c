#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char chaine1 [100];
    char chaine2 [100];
    char resulta [200];
    printf("Entrez la premiere chaine : ");
    scanf("%s",chaine2);
    printf("Entrez la premiere chaine : ");
    scanf("%s", chaine2);
    strcpy(resulta, chaine1);
    strcpy(resulta, " ");
    strcpy(resulta, chaine2);
    printf("%s\n", resulta);





    return 0;
}
