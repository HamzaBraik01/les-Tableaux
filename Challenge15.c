
#include <stdio.h>

int main() {
     int n1, n2, i, j;
    printf("Entrez le nombre d'éléments du premier tableau : ");
    scanf("%d", &n1);

    int T1[n1];
    printf("Entrez les éléments du premier tableau :\n");
    for (i = 0; i < n1; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &T1[i]);
    }
    printf("Entrez le nombre d'éléments du deuxième tableau : ");
    scanf("%d", &n2);
    int T2[n2];
    printf("Entrez les éléments du deuxième tableau :\n");
    for (i = 0; i < n2; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &T2[i]);
    }
    int fusionne[n1 + n2];
    for (i = 0; i < n1; i++) {
        fusionne[i] = T1[i];
    }
    for (j = 0; j < n2; j++) {
        fusionne[i + j] = T2[j];
    }
    printf("Tableau fusionné :\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ",fusionne[i]);
    }


    return 0;
}