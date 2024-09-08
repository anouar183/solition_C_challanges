#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char nom[200]  ;
    char num[200]  ;
    char email[200];
}person;

int main()
{
     int max = 100;
    char of ;
    person P[100];
    int i;
    int j=1;
    do{
            printf("\n");
        for(i=0;i<j;i++){
                printf("person%d entre le nom ",i+1);
                scanf("%s", P[i].nom);

                printf("person%d entre le num ",i+1);
                scanf("%s", P[i].num);

                printf("person%d entre le email address ",i+1);
                scanf("%s", P[i].email);

        printf("\n");
        of:
        printf(" wach bahi tzid dakhll wlala");
        scanf(" %s",&of);

        if(of == 'O'){
            if(j < max){
                j++;
                }

        }
        else if (of!='F')
            goto of;
        }







        }while(of!='F');
        for(i=0;i<j;i++){

        printf("\n le information  persion%d \n nom : %s \n num : %s \n email : %s ",i+1, P[i].nom, P[i].num, P[i].email);

        }

    return 0;
}
