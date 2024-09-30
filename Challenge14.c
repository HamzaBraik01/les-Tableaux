#include <stdio.h>

int main() {
    int i,n,som=0,T[100];
    double moy;
    printf("donnez moi le nombre d'éléments :");
    scanf("%d",&n);
    printf(" saisir les éléments suivat : \n");
    for(i=0;i<n;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
        som+=T[i];
    }
    moy=(float)som/n;
    printf("La moyenne des éléments du tableau est : %.2f\n",moy );

    return 0;
}