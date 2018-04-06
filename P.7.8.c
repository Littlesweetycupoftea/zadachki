#include <stdio.h>

#define r1  8.75;
#define r2 9.33;
#define r3 10.00;
#define r4 11.20;

    int main(void) {
        int c;
        float rate;
        float z, h, n;

        printf("**************************\n");
        printf("Введите число, соответствующее желаемой тарифной ставке или действию:\n");
        printf("1)$8.75/ч                     2)$9.33/ч\n");
        printf("3)$10.00/ч                    4)$11.20/ч\n");
        printf("5)Выход\n");
        printf("**************************\n");

        while (c != 5) {
            scanf("%i", & c);
            switch (c) {
                case 1:
                    r1;
                    break;
                case 2:
                    r2;
                    break;
                case 3:
                    r3;
                    break;
                case 4:
                    r4 ;
                    break;
                case 5:
                    printf("Выход");
                    return 0;
                    break;
                default:
                    printf("Желательно выбрать от 1 до 5\n");
                    return 0;
                    break;
            }

            printf("Общее число часов: ");
            scanf("%f", & h);
            if (h > 40) {
                z = h * rate + (h - 40) * 1.5;
            } else {
                z = h * rate;
            }
            if (z <= 300) {
                n = z * 0.15;
            } else if (z > 300 && z <= 450) {
                n = 45 + (z - 300) * 0.2;
            }

            if (z > 450) {
                n = 45 + 30 + (z - 450) * 0.25;
            }

            printf("Зарплата: $%g\n", z-n);
            printf("Налоги: $%g\n", n);
        }

        return 0;
    }
