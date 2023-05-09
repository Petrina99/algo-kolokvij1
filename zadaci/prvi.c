#include <stdio.h>

/* Zadana je cjelobrojna matrica A od M redaka i N stupaca. Vrijednosti matrice su popunjene nulama i
jedinicama. Potrebno je dati algoritam koji će ispisati koliko u toj matrici ima podmatrica dimenzije 2x2
koje su u cijelosti popunjene jedinicama. Dopušteno je i preklapanje! Napisati koja je složenost vašeg
algoritma*/

int main(void) {

    int mat[4][4] = {
        {0, 1, 1, 1}, 
        {0,1,1,1}, 
        {1,1,0,0}, 
        {0,0,1,1}
    };

    int m = 4, n = 4;

    int b = 0;

    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (mat[i][j] == 1 && mat[i][j + 1] == 1 && mat[i + 1][j] == 1 && mat[i + 1][j + 1] == 1) {
                b++;
            }
        }
    }

    printf("Ima ukupno %d", b);
    return 0;
}