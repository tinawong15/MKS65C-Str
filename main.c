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
    char mycmps2 [256] = "yaa";
    char cmps0 [256] = "hey";
    char cmps1 [] = "heyy";
  	char cmps2 [256] = "yaa";
    printf("Testing strcmp with %s and %s\n", cmps0, cmps1);
    printf("[standard]: %d\n", strcmp(cmps0, cmps1));
    printf("[mine]: %d\n", mystrcmp(mycmps0, mycmps1));
    printf("Testing strcmp with %s and %s\n", mycmps2, cmps2);
    printf("[standard]: %d\n", strcmp(mycmps2, cmps2));
    printf("[mine]: %d\n", mystrcmp(mycmps2, cmps2));
    printf("Testing strcmp with %s and %s\n", cmps1, cmps0);
    printf("[standard]: %d\n", strcmp(cmps1, cmps0));
    printf("[mine]: %d\n", mystrcmp(mycmps1, cmps0));

    char mys [256] = "ello";
    char myc = 'l';
    char s [256] = "ello";
    char c = 'l';
    char mys1 [256] = "aha";
    char myc1 = 'h';
    char s1 [256] = "aha";
    char c1 = 'h';
    printf("Testing strchr with %s and %c\n", mys, myc);
    printf("[standard]: %s\n", strchr(s, c));
    printf("[mine]: %s\n", mystrchr(mys, myc));
    printf("Testing strchr with %s and %c\n", s1, c1);
    printf("[standard]: %s\n", strchr(s1, c1));
    printf("[mine]: %s\n", mystrchr(mys1, myc1));
    return 0;
}
