#include <stdio.h>


int main(void) {

    int A[20][20];

    int m, n;
    printf("Unesite broj redova m: ");
    scanf("%d", &m);

    printf("Unesite broj stupaca n: ");
    scanf("%d", &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int max_p = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] == 1) {
                int n1 = m - i - 1;
                int n2 = n - j - 1;
                
                int p = 0;
                
                int flag = 0;

                int d = n1 >= n2 ? n2 : n1;
    	        // i = 1, j = 4, n1 = 3, n2 = 2
                for (int k = 0; k <= d; k++) {
                    for (int s = 0; s <= d; s++) {
                        if (A[i + k][j + s] == 1 && flag == 0) {
                            p += 1;
                        } else {
                            flag = 1;
                            break;
                        }
                    }
                }

                if (p > max_p) {
                    max_p = p;
                }
            }
        }
    } 

    printf("%d", max_p);
    return 0;
}