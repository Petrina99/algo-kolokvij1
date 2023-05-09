#include <stdio.h>

// o(n*n)

int main(void) {
    int polje[100], n, index;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &polje[i]);
    }

    for (int i = 0; i < (n - 1); i++) {
        index = i;

        for (int j = i + 1; j < n; j++) {
            if(polje[index] > polje[j]) {
                index = j;
            }
        }

        if (index != i) {
            int tmp = polje[i];
            polje[i] = polje[index];
            polje[index] = tmp;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", polje[i]);
    }
    return 0;
}