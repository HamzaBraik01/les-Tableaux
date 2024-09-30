#include <stdio.h>

int main() {
    int T[] = {1, 2, 3, 4, 5};
    int temp;
    int taille = sizeof(T) / sizeof(T[0]);
    printf("Tableau original :\n");
    for (int i = 0; i < taille; i++) {
        printf("T[%d] = %d \n", i+1,T[i]);
    }
    for (int i = 0; i < taille / 2; i++) {
        temp = T[i];
        T[i] = T[taille - 1 - i];
        T[taille - 1 - i] = temp;
    }
    printf("Tableau inversé est :\n");
    for (int i = 0; i < taille; i++) {
        printf("T[%d] = %d \n", i+1,T[i]);
    }
    
    


    return 0;
}