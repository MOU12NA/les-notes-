#include <stdio.h>
#include <stdlib.h>


int tablemax(int*T,int n){
int i,max=T[0];

for(i=1;i<n;i++){
if (max<T[i]){
    max=T[i];
}
}

return max;
}


int tablemin(int*T,int n){
int i,min=T[0];

for(i=1;i>n;i++){
if (min>T[i]){
    min=T[i];
}
}

return min;
}



int main()
{
    int T1[15],T2[13],i;
for(i=0;i<15;i++){
        printf("donner la note de l'etudiant  de 1er classe:\n ");
        scanf(" %d",&T1[i]);
    }
    for(i=0;i<13;i++){
        printf("donner la note de l'etudiant  de 2eme classe:\n ");
        scanf(" %d",&T2[i]);
    }

    printf("le minimum est %d :\n ",tablemin(T1,15));
    printf("le maximum est %d :\n ",tablemax(T1,15));

    printf("le minimum est %d :\n ",tablemin(T2,13));
    printf("le maximum est %d :\n ",tablemax(T2,13));

    return 0;
}
