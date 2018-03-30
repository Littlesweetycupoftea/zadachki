#include <stdio.h>
    int main(void) {
        int i, j, n = 150;
        int p[n];

        for (int i = 1; i < n; ++i)
            p[i] = 0;

        for (i = 2; i <= n; ++i) {
            if (p[i] == 0)
                printf("%i\n", i);


            for (j = 1; i * j <= n; ++j) {
                p[i * j] = 1;
            }
        }

        return 0;
    }
