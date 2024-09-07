#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  age ;
    char nom[20] , prenom[20], email[20],sex[20] ;

    printf("enttrez vos information personnelles");
    printf("\n");
    printf (" entre le  nom :");
    scanf(" %s",&nom);
    printf (" entre le  prenom :");
    scanf("  %s",&prenom);
    printf (" entre le  age :");
    scanf("%d",&age);
    printf (" entre le  sex :");
    scanf("%s",&sex);
    printf (" entre le  email :");
    scanf("%s",&email);
     printf("\n votre profil est \n");
     printf("nom : %s \n", nom);
     printf("prenom : %s \n", prenom);
     printf("age : %d\n ",age);
     printf("sex : %s\n ", sex);
     printf("email :%s\n", email);

    return 0;
}
