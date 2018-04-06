#include <stdio.h> 
#include <string.h>
    void main() {
        char i[50] = "Я спросил у ясеня \0";
        char * l = i;
        char m[50] = "где моя любимая?\0";
        char * t = m;
        strcat(l, t);
        puts(l);
    }
