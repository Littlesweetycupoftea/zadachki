#include <stdio.h> 
#include < math.h >

  void dvoich(int x1) {
        int i, b;
        int c = 0;
        for (i = 0; x1 > 0; i++) {
            b = x1 % 2;
            x1 = (x1 - b) / 2;
            c += b * pow(10, i);
        }
        printf("Число в двоичной системе: %d\n", c);
    }

  void main() {
    int a;
    printf("Введите число в 10 системе:\n");
    scanf("%d", & a);
    dvoich(a);
}
