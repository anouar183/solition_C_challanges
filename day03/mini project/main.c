#include <stdio.h>
#include <stdlib.h>




int main()
{
    int max =100;
    char of ;
    int i=0 ;
    persone P[100];

    do{


        printf("entre le nome  %d : ",i+1);
        scanf("%s",P[i].nom);

        printf("entre le NUMERO %d : ",i+1);
        scanf("%s",P[i].num);

        printf("entre le ADRESS EMAIL  %d : ",i+1);
        scanf("%s",P[i].email);

        do{
        per:
        printf("\n");
        printf(" wax bari tzid O/F");
        scanf(" %c", &of);

        }while (of != 'O' && of != 'F');

        if(of == 'O'){
            if(i<max-1){
                i++;
            }else{
                printf("limite maximale atteninte \n");
                break;
            }
        }


    }while(of!='F');

    for(int j=0 ; j<=i; j++ ){
   printf("person  %d \nnom %s \nnum %s  \nemail %s\n", j+1 , P[j].nom, P[j].num, P[j].email);
    }
    printf("menue : 1\n");
    printf("modifeia :2\n");
    printf("supreme :3\n");
    printf("entre ; 4\n");
int a,PER;
printf("entre le nombre de per");
scanf("%d",&PER);
    if(PER == 1){
            printf("entre le nombre de person\n");
                scanf("%d",&a);
                printf("entre le nome  %d : ",i+1);
        scanf("%s",P[a].nom);

        printf("entre le NUMERO %d : ",i+1);
        scanf("%s",P[a].num);

        printf("entre le ADRESS EMAIL  %d : ",i+1);
        scanf("%s",P[a].email);
    }

    for(int j=a; j<=a; j++ ){
        printf("person  %d \nnom %s \nnum %s  \nemail %s\n", j+1 , P[a].nom, P[a].num, P[a].email);
    }
    for(int j=a ; j<=i; j++ ){
    }








    return 0;
}
