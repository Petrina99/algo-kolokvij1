#include <stdio.h>

/* Zadan je cjelobrojni niz V od N elemenata. Svi brojevi u nizu su pozitivni. Zadan je i pozitivan broj C.
Potrebno je dati algoritam koji će ispitati da li postoje 2 elementa niza V čija suma iznosi točno C. Ako
takvi elementi postoje, potrebno je ispisati na kojim mjestima se u nizu oni nalaze. Ako ne postoje takva 2
broja onda ispisati odgovarajuću poruku. Napisati također koja je složenost vašeg algoritma*/

int main(void) {

    int p[] = {2, 4, 8, 8, 4, 2, 12};
    int n = 7;
    int c = 16;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n;j++) {
            if (p[i] + p[j] == c) {
                printf("%d (%d) + %d (%d) = %d\n", p[i], i + 1, p[j], j + 1, c);
            }
        }
    }


    return 0;
}