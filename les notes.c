#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[15], min1, max1;
    int TAB[13], min2,max2;
    int i ,j,cpt1,cpt2,k;
    int TAB2[28];

    for(i=0;i<15;i++){
        printf("donner la note de l'etudiant  de 1er classe:\n ");
        scanf("%d",&T[i]);
    }
   cpt1=0;
    max1=T[0];
    min1=T[0];
    for(i=1;i<15;i++){
            if(T[i]>T[max1]){
                max1=T[i];
            }
            if (T[i]<T[min1]){
                min1=T[i];
            }
            if (T[i]>=10){
                cpt1=cpt1+1;

            }
    }
for ( j=0 ;j<=13;j++){
        printf("donner la note de l'etudiant  de 2eme classe %d \n ");
        scanf(" %d",&TAB[j]);
    }
    cpt2=0;
    max2=TAB[0];
    min2=TAB[0];
    for (j=0;j<=13;j++){
            if(TAB[j]>TAB[max2]){
                max2=TAB[j];
            }
            if (TAB[j]<TAB[min2]){
                min2=TAB[j];
            }
            if (TAB[j]>=10 ){
                cpt2=cpt2+1;
            }
    }








printf("la note majeur de premier class %d \n ",max1);
printf("la dernier note de premier classe est %d \n  ",min1);
printf("le nombe des note superieur 10 est %d \n ",cpt1);
printf("la note majeur de deuxieme class est %d \n ",max2);
printf("la dernier note de deuxieme classe est %d \n  ",min2);
printf("le nombe des note superieur 10 est %d \n ",cpt2);




    return 0;
}

