#include <stdio.h>

#define MAX 1000

int stog[MAX];
int sp = -1;

void push();
void pop();
void ispisi();

int main(void) {

    push();
    push();
    push();
    pop();
    ispisi();
    
    return 0;
}

void push() {
    int broj;
    if (sp == MAX - 1){
        printf("Stack overflow\n");
    } else {
        scanf("%d", &broj);
        sp = sp + 1;
        stog[sp] = broj;
    }
} 

void pop() {
    if (sp == -1) {
        printf("Stack underflow\n");
    } else {
        printf("%d\n", stog[sp]);
        sp = sp - 1;
    }
}

void ispisi() {
    for (int i = 0; i <= sp; i++) {
        printf("%d ", stog[i]);
    }
}

void peek() {
    int x = stog[sp];
    printf("%d is the top element\n", x);
}

int isEmpty() {
    if (sp == -1) {
        printf("Stog je prazan: Underflow state\n");
        return 1;
    } else {
        printf("Stog nije prazan\n");
        return 0;
    }
}

int isFull() {
    if (sp == MAX - 1) {
        printf("Stog je pun: Overflow state\n");
        return 1;
    } else {
        printf("Stog nije pun\n");
        return 0;
    }
}