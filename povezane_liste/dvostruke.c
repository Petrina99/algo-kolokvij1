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

void dodaj_na_kraj(elem* glava, int b) {
    elem* tmp = glava;

    while (tmp->next != NULL) {
        tmp = tmp->next;
    }

    elem* tmp2 = (elem*) malloc(sizeof(elem));
    tmp2->x = b;
    tmp2->prev = tmp;
    tmp2->next = NULL;
    tmp->next = tmp2;
}

void ubaci(elem* glava, int index, int b) {

    elem* tmp = glava;
    int brojac = 1;

    if (index == 1) {
        elem* novi = (elem*) malloc(sizeof(elem));
        novi->next = glava->next;
        novi->prev = glava;
        glava->next = novi;
    } else {
        while (tmp->next != NULL) {
            if (brojac == index) {
                elem* novi = (elem*) malloc(sizeof(elem));
                novi->x = b;
                novi->next = tmp->next;
                novi->prev = tmp;
                tmp->next = novi;
                break;
            } else {
                tmp = tmp->next;
                brojac++;
            }
        }
    }
}