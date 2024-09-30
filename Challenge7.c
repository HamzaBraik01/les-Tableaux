#include <stdio.h>

int main() {
    int i,n,T[100],temp;
    printf("donnez moi le nombre d'éléments :");
    scanf("%d",&n);
    printf(" saisir les éléments suivat : \n");
    for(i=0;i<n;i++){
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    } 
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(T[i]>T[j]){
                temp=T[j];
                T[j]=T[i];
                T[i]=temp;
            }
        }
    }
    printf("Tableau en Ordre Croissant est :\n");
    for (int i = 0; i < n; i++) {
        printf("T[%d] =%d \n",i+1, T[i]);
    }

    
   
    
   

    return 0;
}
