# include "str.h"
# include <stdio.h>
# include <string.h>

int main() {
    char str[] = "hello";
    printf("Testing strlen with %s\n", str);
    printf("[standard]: %lu\n", strlen(str));
    printf("[mine]: %d\n", mystrlen(str));

    char mycpyDest [256] = "hola";
    char mycpySrc [] = "hi";
    char cpydest [256] = "hola";
    char cpysrc [] = "hi";
    printf("Testing strcpy with %s and %s\n", cpydest, cpysrc);
    printf("[standard]: %s\n", strcpy(cpydest, cpysrc));
    printf("[mine]: %s\n", mystrcpy(mycpyDest, mycpySrc));

    char mycatDest [256] = "goodbye";
    char mycatSrc [] = "ciao";
    char catdest [256] = "goodbye";
    char catsrc [] = "ciao";
    printf("Testing strncat with %s and %s\n", catdest, catsrc);
    printf("[standard]: %s\n", strncat(catdest, catsrc, 2));
    printf("[mine]: %s\n", mystrncat(mycatDest, mycatSrc, 2));

    char mycmps0 [256] = "hey";
    char mycmps1 [] = "heyy";
    char cmps0 [256] = "hey";
    char cmps1 [] = "heyy";
    printf("Testing strcmp with %s and %s\n", cmps0, cmps1);
    printf("[standard]: %d\n", strcmp(cmps0, cmps1));
    printf("[mine]:\n");

    // char mys [256] = "ello";
    // char myc = 'l';
    // char s [256] = "ello";
    // char c [] = "l";
    // printf("Testing strchr with %s\n", mys, myc);
    // printf("[standard]: %s\n", strchr(s, c));
    // printf("[mine]:\n");
    return 0;
}
