#include <stdio.h>

// o(n)
int main(void) {

    int p[10], trazeni, i, n, status = 0;

    scanf("%d", &n);

    printf("Unesite brojeve: \n");
    for (i = 0; i < n; i++) {
        printf("Broj na %d. mjestu: ", i + 1);
        scanf("%d", &p[i]);
    }

    printf("Trazeni broj: ");
    scanf("%d", &trazeni);

    for (i = 0; i < n; i++) {
        if (p[i] == trazeni) {
            printf("Broj pronaden na %d. mjestu u polju.", i+1);
            status = 1;
            break;
        }
    }

    if (status == 0) printf("Broj nije pronaden.");

    return 0;
}