#include <stdio.h>
    int main(void)

{
    printf("   Faktorial\n\n");
    int f = 1;
    for (int n = 1; n <= 10; n++) {
        f *= n;
        printf("%2i     %8i\n", n, f);

    }
    return 0;

}