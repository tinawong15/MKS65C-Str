# include "str.h"
# include <stdio.h>
# include <string.h>

int mystrlen(char *s) {
  int count = 0;
  while(*(s++)) {
    count++;
  }
  return count;
}

int main() {
    char * str = "hello";
    printf("Testing strlen with %s\n", str);
    printf("[standard]: %lu\n", strlen(str));
    printf("[mine]: %d\n", mystrlen(str));

    printf("Testing strcpy with %s\n", str);
    printf("[standard]:\n");
    printf("[mine]:\n");

    printf("Testing strncat with %s\n", str);
    printf("[standard]:\n");
    printf("[mine]:\n");

    printf("Testing strcmp with %s\n", str);
    printf("[standard]:\n");
    printf("[mine]:\n");

    printf("Testing strchr with %s\n", str);
    printf("[standard]:\n");
    printf("[mine]:\n");
    return 0;
}
