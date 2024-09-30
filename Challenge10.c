#include <stdio.h>

int main() {
    int taille, element, trouve = 0;

    printf("Entrez le nombre d'éléments dans le tableau : ");
    scanf("%d", &taille);
    int T[taille];
    printf("Entrez les éléments du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("T[%d] = ",i+1);
        scanf("%d", &T[i]);
    }
    printf("Entrez l'élément à rechercher : ");
    scanf("%d", &element);

    for (int i = 0; i < taille; i++) {
        if (T[i] == element) {
            trouve = 1;
            break;
        }
    }
    if (trouve) {
        printf("L'élément %d est présent dans le tableau.\n", element);
    } else {
        printf("L'élément %d n'est pas présent dans le tableau.\n", element);
    }

    return 0;
}