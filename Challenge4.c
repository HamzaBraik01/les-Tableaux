#include <stdio.h>

int main() {
    int i,n,T[100];
    printf("donnez moi le nombre d'éléments :");
    scanf("%d",&n);
    printf(" saisir les éléments suivat : \n");
    for(i=0;i<n;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    int max=T[0];
    for(i=0;i<n;i++){
        if(T[i]>max){
            max=T[i];
        }
    }
    printf("le max est : %d",max);

    
   

    return 0;
}
