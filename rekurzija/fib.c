#include <stdio.h>

int fibo(int n);

int main(void) {

    int rez = fibo(10);
    printf("%d", rez);
    return 0;
}

int fibo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}