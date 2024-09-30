#include <stdio.h>

int main() {
    int i,n,T[100],facteur;
    printf("donnez moi le nombre d'éléments :");
    scanf("%d",&n);
    printf(" saisir les éléments suivat : \n");
    for(i=0;i<n;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    printf("donnez moi facteur de multiplication : ");
    scanf("%d",&facteur);
    for(i=0;i<n;i++){
        T[i]=T[i]*facteur;
        
    }
    printf("Tableau après multiplication :\n");
    for (int i = 0; i < n; i++) {
        printf("T[%d] =%d \n",i+1, T[i]);
    }

    
   

    return 0;
}
