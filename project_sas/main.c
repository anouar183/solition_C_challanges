#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int  day ;
    int monthe ;
    int  anne ;
}Date_de_naissance ;

typedef struct{

    char Numero_unique[50];
    char Nom [50];
    char Prenom [50];
    Date_de_naissance date;
    char   DE [50]  ;
    int Note_generale ;

}etudiant ;

int i,a;
etudiant  P[100];

void Ajouter_un_etudiant (){
        printf("entre le numbre de etudiant  %d : \n",i+1);


        printf("entre le nome  %d : ",i+1);
        scanf("%s",P[i].Nom);

        printf("entre le Prenom %d : ",i+1);
        scanf("%s[^\n]",P[i].Prenom);

        printf("entre le NumEro unique  %d : " ,i+1);
        scanf("%s", P[i].Numero_unique);

        /*date de naissance*/

        printf("entre le  day  %d : ",i+1);
        scanf("%d",&P[i].date.day);

        printf("entre le monthe  %d : ",i+1);
        scanf("%d",&P[i].date.monthe);

        printf("entre le anne  %d : ",i+1);
        scanf("%d",&P[i].date.anne);



        /*Departement*/
        printf("entre le Departement 'svt' ou 'math' ou 'phisique'  %d : ",i+1);
        scanf("%s",P[i].DE);

        /*Note générale*/
        printf("entre le Note générale  %d : ",i+1);
        scanf("%d",&P[i].Note_generale);


        i++;
        a=i;

}
void Modification (){
    char nombre[50];
    printf("entre le Numero unique");
    scanf("%s", nombre);
    for(i=0;i<=100;i++){
        if (strcmp( P[i].Numero_unique,nombre)==0){

       Ajouter_un_etudiant();
        }
    }

}
void Supprimer_un_etudiant() {
    char Numero_unique[50];
    int POSITION = 0;

    printf("Entrez le Numero unique: ");
    scanf("%s", Numero_unique);


    for (i = 0; i < a; i++) {
        if (strcmp(P[i].Numero_unique, Numero_unique) == 0) {
            POSITION = 1;


            for (int j = i; j < a - 1; j++) {
                P[j] = P[j + 1];
            }

            a--;
            break;
        }
    }


}
void Tri_alphabetique_des_etudiants_en_fonction (){
    char TMP [50];
    for(i=0;i<=a;i++){
        if(strcasecmp( P[i].Nom,P[i+1].Nom)>0){
           strcpy(TMP , P[i+1].Nom) ;
           strcpy (P[i+1].Nom , P[i].Nom );
            strcpy( P[i].Nom , TMP);
        }
        printf(" NOM :%s\n%s\n", P[i].Nom, P[i].Note_generale);
    }



}


float somme_de_not_Depar_math=0;
float moyenne_Depar_math;
void la_moyenne_generale_de_l_universite(){
    /*somme de not l'universit */

    float somme , moyenne;
    somme=0;

    for(i=0;i<=a;i++){
        somme=somme + P[i].Note_generale;
    }
        moyenne= somme/a;

        printf("la moyenne generale de l'universit  : %.3f",moyenne);


 /* moyenne Departement */

    char DEP[]="math";

    int CONT=0;
    for(i=0;i<=a;i++){
    if(strcmp(DEP, P[i].DE)==0){
            CONT++;
            somme_de_not_Depar_math=somme_de_not_Depar_math+ P[i].Note_generale;
    }
    }

    moyenne_Depar_math = somme_de_not_Depar_math / CONT ;


    printf("\nla moyan de math : %.3f \n",moyenne_Depar_math);



     /* moyenne Departement phisique */

    char DEPA[]="phisique";
float moyenne_Depar_PHISIQUE;
float somme_de_not_Depar_PHISIQUE;
    int CONTR=0;
    for(i=0;i<=a;i++){
    if(strcmp(DEPA, P[i].DE)==0){
            CONTR++;
            somme_de_not_Depar_PHISIQUE=somme_de_not_Depar_PHISIQUE+ P[i].Note_generale;
    }
    }

    moyenne_Depar_PHISIQUE = somme_de_not_Depar_PHISIQUE / CONTR;


    printf("\nla moyan de phisique : %.3f \n",moyenne_Depar_PHISIQUE);




     /* moyenne Departement svt */

    char DEPAR[]="svt";
float moyenne_Depar_SVT;
float somme_de_not_Depar_SVT;
    int CONTRO=0;
    for(i=0;i<=a;i++){
    if(strcmp(DEPAR, P[i].DE)==0){
            CONTRO++;
            somme_de_not_Depar_SVT=somme_de_not_Depar_SVT+ P[i].Note_generale;
    }
    }

    moyenne_Depar_SVT = somme_de_not_Depar_SVT / CONTRO ;


    printf("\n la moyan de SVT : %.3f \n",moyenne_Depar_SVT);


    }

/*pour Statistiques 5:*/
    void le_nombre_total_detudiants_inscrits(){
    printf("\nle nombre total d'étudiants inscrits %d\n",a);
    }
    void le_nombre_detudiants_dans_chaque_departement(){
    printf("\n***********************************************************************************\n");
    printf("\n si le nombre total d'étudiants entre  departement phisique :%d \n");
    printf("\n si le nombre total d'étudiants entre  departement svt  :%d\n");
    printf("\n si le nombre total d'étudiants entre  departement math: %d\n");
    printf("\n***********************************************************************************\n");
    }

    void les_etudiants_ayant_une_moyenne_generale_superieure_a_un_certain_seuil(){
        float nombre ;
        printf("les etudiants ayant une moyenne generale superieure a un certain seuil\n");
        printf("entre une nombre :");
        printf("entre un nombre ");
        scanf("%d",&nombre);
    for(i=0;i<=a;i++){
       if( P[i].Note_generale>nombre){
    printf("\n***********************************************************************************\n");
        printf(" nome :%s\n",   P[i].Nom);
        printf("note  :%d ",   P[i].Note_generale);

    }

    }
    }


    void les_3_etudiants_ayant_les_meilleures_notes(){
    int TMP;
    int j;
       for(i=0;i<=a;i++){
        for(j=1;j<=a;j++){
            if( P[j].Note_generale < P[i].Note_generale){
                TMP = P[i].Note_generale ;
                P[i].Note_generale = P[j].Note_generale ;
                P[j].Note_generale = TMP ;
            }

        }

       }
        for(j=0;j<3;i++){
        printf("\ntop %d est :%s\n",i+1, P[i].Nom);

}
    }
void le_nombre_detudiants_superieure_ou_egale(){

        printf("\nsi les etudiants superieure ou egale 10/20\n ");

for(i=0;i<a;i++){
    if( P[i].Note_generale>=10){
            printf("réussi :%s", P[i].Nom);
    printf("\n----------------------\n");
    }
}

}



 void Tri_des_etudiants_par_moyenne_generale(){
    int VAR;
    int y;
       for(i=0;i<=a;i++){
        for(y=1;y<=a;y++){
            if( P[y].Note_generale < P[i].Note_generale){
                VAR = P[i].Note_generale ;
                P[i].Note_generale = P[y].Note_generale ;
                P[y].Note_generale = VAR ;
            }

        }

       }
        for(y=0;y<=a;i++){
        printf("\n etu %d est :%s\n",i+1, P[i].Nom);

}
    }
void Afficher(){

    printf("etudiant %d\n",i+1);
            printf("  Nom       Prenom       Numero_unique       Date de naissance       Note generale       Note Departement\n");

        printf("\n-------------------------------------------------------------------------------------------------------------\n");

    for(i=0;i<a;i++){


        printf("       %s       %s       %s       %d/%d/%d       %d       %s       \n       ", P[i].Nom, P[i].Prenom, P[i].Numero_unique, P[i].date.day, P[i].date.monthe, P[i].date.anne, P[i].Note_generale, P[i].DE);
         printf("\n------------------------------------------------------------------------------------------------------------\n");


    }
    }

void Rechercher_un_etudiant(){
    char D[50];
    char nom[50];
    int r;

    printf("entre le departement de etudiant");
    scanf("%s", D);
    printf("entre le nom de etudiant");
    scanf("%s", nom);
    for(i=0;i<=a;i++){
    if((strcmp(nom, P[i].Nom)==0 )&& (strcmp( P[i].DE ,D )==0) ){
         r=i;
    }
    }
    printf("etudiant %d\n",i+1);
        printf("Nom : %s\n",P[r].Nom);

        printf("Prenom : %s\n",P[r].Prenom);

        printf("Numero_unique : %s\n",P[r].Numero_unique);

        printf("Date de naissance: %d",P[r].date.day);

        printf("/%d",P[r].date.monthe);

        printf("/%d\n",P[r].date.anne);

        printf(" Note generale : %d\n",P[r].Note_generale);


}













void afficher_menu(){
    printf("\n----------------------\\ Menu //----------------------\n");
    printf("1.  Ajouter un etudiant\n");
    printf("2.  Modifier un etudiant ET Supprimer un etudiant\n");
    printf("3.  Afficher les details d'un etudiant\n");
    printf("4.  Calculer la moyenne generale de l'universite   ET  la moyenne generale de \n");
    printf("5.  Statistiques \n");
    printf("6.  Rechercher un étudiant par\n");
    printf("7.  Trier un étudiant par\n");


}
int main()
{
    int choix3;
    int choix ;
    int choix2;
    do{
    afficher_menu();
    printf("Entrez votre choix: ");
    scanf("%d",&choix);

    switch (choix){
    case 1 :Ajouter_un_etudiant();
        break;
    case 2 :   printf("1. Modifier un etudiant\n");
               printf("2. Supprimer un etudiant\n");
               printf("entre votre choix ");
               scanf("%d",&choix2);
               switch (choix2)   {
                   case 1 : Modification ();
                   case 2 : Supprimer_un_etudiant();

               }
        break;
    case 3 :Afficher();
        break;
    case 4:la_moyenne_generale_de_l_universite();
        break;
    case 5 :le_nombre_total_detudiants_inscrits();
           les_etudiants_ayant_une_moyenne_generale_superieure_a_un_certain_seuil();
            /*les_3_etudiants_ayant_les_meilleures_notes();*/
            le_nombre_detudiants_superieure_ou_egale();
        break;
    case 6 :Rechercher_un_etudiant();
        break;
        case 7 :Tri_alphabetique_des_etudiants_en_fonction();
                Tri_alphabetique_des_etudiants_en_fonction();
        break;
    }

    }while(choix != 8);

    return 0;
}
