#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element* next;
}typedef elem;

elem* stvori_listu();
elem* dodaj_na_pocetak(elem* glava, int b);
void ispis(elem* glava);
float aritmeticka(elem* glava);
void dodaj_na_kraj(elem* glava);
void obrisi_kraj(elem* glava);
void ubaci(elem* glava, int index, int b);

int main(void) {

    elem* glava = stvori_listu();

    ispis(glava);

    dodaj_na_kraj(glava);
    dodaj_na_kraj(glava);

    ispis(glava);

    obrisi_kraj(glava);
    printf("\n");
    ispis(glava);

    printf("\n");
    ubaci(glava, 3, 99);

    ispis(glava);

    glava = dodaj_na_pocetak(glava, 50);

    printf("\n");
    ispis(glava);
    return 0;
}

elem* dodaj_na_pocetak(elem* glava, int b) {
    if (glava != NULL) {
        elem* tmp = (elem*) malloc(sizeof(elem));
        tmp->x = b;
        tmp->next = glava;
        return tmp;
    }
}

elem* stvori_listu() {
    int i, n;
    elem *p, *glava;

    printf("Koliko zelite elemenata liste: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (i == 0) {
            glava = (elem*) malloc(sizeof(elem));
            p = glava;
        } else {
            p->next = (elem*) malloc(sizeof(elem));
            p = p->next;
        }

        printf("Unesi vrijednost: ");
        scanf("%d", &p->x);
    }

    p->next = NULL;
    return(glava);
}

void ispis(elem* glava) {

    elem* p = glava;
    while (p != NULL) {
        printf("%d ", p->x);
        p = p->next;
    }
}
 
float aritmeticka(elem* glava) {
    elem* p;
    int b = 0, suma = 0;
    float aritm = 0;

    p = glava;

    while (p != NULL) {
        b++;
        suma += p->x;
        p = p->next;
    }

    aritm = suma / b;
    return aritm;
}

void dodaj_na_kraj(elem* glava) {

    elem* tmp1;
    tmp1 = (elem*) malloc(sizeof(elem));
    tmp1 = glava;

    //odlazimo na kraj
    while (tmp1->next != NULL) {
        tmp1 = tmp1->next;
    }

    elem* tmp;

    tmp = (elem*) malloc(sizeof(elem));
    printf("Unesi broj za dodat na kraj: ");
    scanf("%d", &tmp->x);
    tmp->next = NULL;
    tmp1->next = tmp;
}

void obrisi_kraj(elem* glava) {
    elem* tmp;

    tmp = (elem*) malloc(sizeof(elem));

    tmp = glava;

    elem* otmp;
    otmp = (elem*) malloc(sizeof(elem));

    while (tmp->next != NULL) {
        otmp = tmp;
        tmp = tmp->next;
    }

    otmp->next = NULL;
    free(tmp);
}

void ubaci(elem* glava, int index, int b) {
    elem* novi = (elem*) malloc(sizeof(elem));
    elem* tmp = glava;

    int brojac = 1;

    novi->x = b;

    if (index == 1) {
        novi->next = glava->next;
        glava->next = novi;
    } else {
        while (tmp->next != NULL) {
            if (brojac == index) {
                novi->next = tmp->next;
                tmp->next = novi;
                break;
            } else {
                tmp = tmp->next;
                brojac++;
            }
        }
    }
}