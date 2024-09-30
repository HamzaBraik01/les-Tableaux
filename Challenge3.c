#include <stdio.h>

int main() {
    int i,n,som=0,T[100];
    printf("donnez moi le nombre d'éléments :");
    scanf("%d",&n);
    printf(" saisir les éléments suivat : \n");
    for(i=0;i<n;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
        som+=T[i];
    }
    for(i=0;i<n;i++){
        printf("T[%d] = %d\n",i+1,T[i]);
    
    }
    printf("la somme totale : %d",som);

    return 0;
}
