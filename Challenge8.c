#include <stdio.h>

int main() {
    int original[] = {1, 2, 3, 4, 5};
    int taille = sizeof(original) / sizeof(original[0]);
    int copie[taille];
    for (int i = 0; i < taille; i++) {
        copie[i] = original[i];
    }
    printf("Tableau original :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", original[i]);
    }
    printf("\n");
    printf("Tableau copié :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", copie[i]);
    }
    printf("\n");

    return 0;
}
