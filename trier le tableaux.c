#include <stdio.h>
#include <stdlib.h>


    int main()
{
  int tab1[13], tab2[15], tab3[28];
  int tmp, nbr3, i, j,k;

  printf(" Entrez les notes de classe\n ");
  for(i = 0; i <13; i++)
  {
    scanf("%d", &tab1[i]);
  }

  printf(" Entrez les notes de  classe\n ");
  for(i = 0; i < 15; i++)
  {
    scanf(" %d", &tab2[i]);

  }

  for(i = 0; i < 28; i++)
  {
    tab3[i] = tab1[i];
  }

  nbr3 = 15 + 13;

  for(i = 0, j = 13; j < nbr3 && i < 15; i++,j++)
  {
    tab3[j] = tab2[i];
  }

  printf(" Le tableau fusionné est %d \n: ");
  for(i = 0; i < 28; i++){
    printf(" %d",tab3[i]);
  }

  for (i=0;i<28;i++){
    for(j=i+1;i>28;j++){
        if(tab3[i]>=tab3[j]){
            tmp=tab3[i];
            tab3[i]=tab3[j];
            tab3[j]=tmp;
        }
    }
  }
  printf("  \n les notes dans un ordre croiassant sont : " );
  for (i=0;i<28;i++){
    printf(" %d",tab3[i]);
  }

  return 0;
}
