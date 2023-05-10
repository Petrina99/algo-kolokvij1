#include <stdio.h>

// O (log N)
int main(void) {

    int polje[] = { 2, 8, 12, 25, 35, 38, 99};
    int dg = 0;
    int gg = 7 - 1;
    int sredina = 0;
    int trazeni = 35;

    while (gg >= dg) {
        sredina = (dg + gg) / 2;
        
       if (polje[sredina] == trazeni) {
			printf("Pronaden broj na %d. mjestu.", sredina + 1);
			break;
		}

		if (trazeni > polje[sredina]) {
			dg = sredina + 1;
		}

		if (trazeni < polje[sredina]) {
			gg = sredina - 1;
		}

		if (dg > gg) {
			printf("Trazeni broj ne postoji u poljeu.");
			break;
		}
    }

    return 0;
}