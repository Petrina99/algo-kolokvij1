#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element* next;
} typedef e;

e* stvori_listu(int v[], int n);
void ispis(e* glava);

// parni na pocetak, neparni na kraj liste
int main(void) {

    int v[] = { 7, 2, 4, 6, 9, 12, 13, 24};
    int n = sizeof(v) / sizeof(int);

    e* glava;

    glava = stvori_listu(v,n);

    ispis(glava);

    return 0;
}

e* stvori_listu(int v[], int n) {

    e *glava;

    glava = (e*) malloc(sizeof(e));
    glava->x = v[0];
    glava->next = NULL;

    for (int i = 1; i < n; i++) {
        if (v[i] % 2 == 0 || v[i] == 0) {
            e* temp = (e*) malloc(sizeof(e));

            temp->x = v[i];
            temp->next = glava;
            glava = temp;
        } else {
            e* temp1 = (e*) malloc(sizeof(e));
            temp1 = glava;

            while (temp1->next != NULL) {
                temp1 = temp1->next;
            }

            e* temp;

            temp = (e*) malloc(sizeof(e));
            temp->x = v[i];
            temp->next = NULL;
            temp1->next = temp;
        }
    }


    return glava;
}

void ispis(e* glava) {

    e* p = glava;
    while (p != NULL) {
        printf("%d ", p->x);
        p = p->next;
    }
}
 