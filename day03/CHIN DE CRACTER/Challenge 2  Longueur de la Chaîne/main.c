#include <stdio.h>



int main() {
    int longueur=0;
    char chaine[100];
    printf("Entrez une cha�ne de caract�res : ");
    scanf("%s", chaine);
     for (int i = 0; chaine[i] != '\0'; i++) {
            longueur ++;
     }
    printf("La longueur de la cha�ne est : %d\n", longueur);

    return 0;
}
