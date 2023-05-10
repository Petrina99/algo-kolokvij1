#include <stdio.h>

int fact(int n);

int main(void) {
    	
    int rez = fact(5);

    printf("%d", rez);
    return 0;
}

int fact(int n) {
    if (n == 1) return 1;

    return n * fact(n - 1);
}