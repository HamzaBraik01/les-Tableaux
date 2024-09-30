
#include <stdio.h>

int main() {
    int taille, valeur1,valeur2, trouve = 0;

    printf("Entrez le nombre d'éléments dans le tableau : ");
    scanf("%d", &taille);
    int T[taille];
    printf("Entrez les éléments du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("T[%d] = ",i+1);
        scanf("%d", &T[i]);
    }
    printf("Entrez la valeur à remplacer : ");
    scanf("%d", &valeur1);
    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &valeur2);
    for (int i = 0; i < taille; i++) {
        if (T[i] == valeur1) {
            T[i] = valeur2;
        }
    }
    printf("Tableau modifié :\n");
    for (int i = 0; i < taille; i++) {
        printf("T[%d] = %d\n",i+1,T[i]);
    }

    return 0;
}
