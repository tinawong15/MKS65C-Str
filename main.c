# include "str.h"
# include <stdio.h>
# include <string.h>

int main() {
    char str[] = "hello";
    printf("Testing strlen with %s\n", str);
    printf("[standard]: %lu\n", strlen(str));
    printf("[mine]: %d\n", mystrlen(str));

    printf("Testing strcpy with %s\n", str);
    printf("[standard]:\n");
    printf("[mine]:\n");

    char myDest [256] = "goodbye";
    char mySrc[] = "ciao";
    char dest [256] = "goodbye";
    char src [] = "ciao";
    printf("Testing strncat with %s and %s\n", dest, src);
    printf("[standard]: %s\n", strncat(dest, src, 2));
    printf("[mine]: %s\n", mystrncat(myDest, mySrc, 2));

    printf("Testing strcmp with %s\n", str);
    printf("[standard]:\n");
    printf("[mine]:\n");

    printf("Testing strchr with %s\n", str);
    printf("[standard]:\n");
    printf("[mine]:\n");
    return 0;
}
