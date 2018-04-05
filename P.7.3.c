#include <stdio.h>

    int main(void) {
        int c = 1, ch = 0, nch = 0;
        float sch = .0, snch = .0;
        printf("Введите число \n");
        while (c != 0) {
            scanf("%i", & c);
            if (c % 2 == 0 && c != 0) {
                ch++;
                sch += c;
            }
            if (c % 2 != 0) {
                nch++;
                snch += c;
            }
        }
        printf("Чётных %i\n  И их среднее значение = %.2f \n", 
                                                ch, sch / ch);
        printf("Нечётных %i\n А их среднее значение = %.2f \n", 
                                                nch, snch / nch);
    }
