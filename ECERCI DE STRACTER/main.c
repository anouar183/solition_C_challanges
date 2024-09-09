#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date {
    int jour;
    char mois[10];
    int annee;
} Date;

typedef struct person {
    char name[20];
    char prenom[20];
    Date bi;
} Person;

typedef struct address {
    char country[20];
    char ville[20];
    Person res;
} Address;

int main() {
    Address addr;

    printf("Enter name: ");
    scanf("%s", addr.res.name);
    printf("Enter prenom: ");
    scanf("%s", addr.res.prenom);
    printf("Enter jour: ");
    scanf("%d", &addr.res.bi.jour);

    printf("Enter mois: ");
    scanf("%s", addr.res.bi.mois);

    printf("Enter annee: ");
    scanf("%d", &addr.res.bi.annee);

    printf("Enter country: ");
    scanf("%s", addr.country);

    printf("Enter ville: ");
    scanf("%s", addr.ville);

    printf("Name: %s\n", addr.res.name);
    printf("Prenom: %s\n", addr.res.prenom);
    printf("Date  Birth: %d %s %d\n", addr.res.bi.jour, addr.res.bi.mois, addr.res.bi.annee);
    printf("Country: %s\n", addr.country);
    printf("Ville: %s\n", addr.ville);

    return 0;
}
