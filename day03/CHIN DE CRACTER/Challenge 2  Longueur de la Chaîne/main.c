#include <stdio.h>



int main() {
    int longueur=0;
    char chaine[100];
    printf("Entrez une chaîne de caractères : ");
    scanf("%s", chaine);
     for (int i = 0; chaine[i] != '\0'; i++) {
            longueur ++;
     }
    printf("La longueur de la chaîne est : %d\n", longueur);

    return 0;
}
