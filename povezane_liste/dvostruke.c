#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element* prev;
    struct element* next;
} typedef elem;

elem* dodaj_na_pocetak(elem* glava, int b);
void ispis(elem* glava);

int main(void) {

    elem* glava = (elem*) malloc(sizeof(elem));
    glava->x = 50;

    glava = dodaj_na_pocetak(glava, 32);
    glava = dodaj_na_pocetak(glava, 32);
    glava = dodaj_na_pocetak(glava, 32);
    glava = dodaj_na_pocetak(glava, 32);

    ispis(glava);
    return 0;
}

elem* dodaj_na_pocetak(elem* glava, int b) {
    if (glava != NULL) {
        elem* temp = (elem*) malloc(sizeof(elem));
        temp->prev = NULL;
        temp->next = glava;
        temp->x = b;
        return temp;
    }
}

void ispis(elem* glava) {

    elem* p = glava;

   while (p != NULL) {
        printf("%d ", p->x);
        p = p->next;
    }
}