#include <stdio.h>

    int main(void) {
        float r, w = .0;
        char z;

        printf("your number and sign\n");

        for (;;) {
            scanf("%f %c", & r, & z);

            if (z == 'e') {
                printf("= %f\n", w);
                printf("happy end\n");
                break;
            }

            switch (z) {
                case 's':
                    w = r;
                    printf("= %f\n", w);
                    break;
                case '+':
                    w += r;
                    printf("= %f\n", w);
                    break;
                case '-':
                    w -= r;
                    printf("= %f\n", w);
                    break;
                case '*':
                    w *= r;
                    printf("= %f\n", w);
                    break;
                case '/':
                    (r == 0) ? printf("never divide to zero!\n"): printf("= %f\n", w /= r);
                    break;
                default:
                    printf("it's not a sign!\n");
                    break;
            }
        }

        return 0;
    }
