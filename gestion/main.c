#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , i ;
    float Tp[100];
    float somme;
    float nombre_de_produits;
    printf(" entre le nombre de produits  vendus dans la journee");
    scanf("%f",&nombre_de_produits );
    for(i=0;i<nombre_de_produits;i++){
        printf("entre le prixe de produits ");
        scanf("%f",&Tp[i]);
    }
    printf("\n");
    int choix;
    printf("que shouaitez vous faire ?\n");
    printf("1 - calculer le totale des ventes?\n");
    printf("2 - trouver la vente la plus elevee et la plus basse?\n");
    printf("3 - afficher les ventes superieures a une moyenne  ?\n");
    printf("4 - compter le nombre d ventes superuers a 100 ?\n");
    printf("5 - compter le nombre d ventes inferieures a 100 ?\n");
    printf("6 - quitter ?\n");
        printf("\n");
    printf(" entre votre choix : ");
    scanf("%d",&choix);
    if(choix==1){
        somme=0;
    for(i=0;i<nombre_de_produits;i++){
        somme=somme +Tp[i];
    }
    printf("SI LA SOMME EST :%.2f",somme);
    }



    else if (choix==2){
     int    max1=Tp[0];
     int    max2=Tp[0];
        for(i=0;i<=nombre_de_produits;i++){

                for(int j=1;j<=nombre_de_produits;j++){
                        if(Tp[j]<Tp[i])
                        max1=Tp[i];
                }
        }
         printf("si plus petite est %d",max1);


                 printf("\n");


     int    min1=Tp[0];
     int    min2=Tp[0];
        for(i=0;i<=nombre_de_produits;i++){

                for(int j=1;j<=nombre_de_produits;j++){
                        if(Tp[j]<Tp[i])
                        max1=Tp[j];
                }
        }
         printf("si plus PETIT est %d",min1);


    }
    printf("\n");

    if(choix == 3){
            int Tpe[100];
            int moyan;
         moyan=somme/nombre_de_produits;
         for(i=0;i<nombre_de_produits;i++){
            if (Tp[i]>moyan){
            Tpe[i]=Tp[i];
                printf(" les ventes superieures a la moyan %d\n",Tpe[i]);
         }
         }

    }
        if(choix == 4){
            for(i=0;i<nombre_de_produits;i++){
           if( T[i]>100);
           printf("%d",Tp[i]);
            }
            else
                ()

        }







    return 0;
}
