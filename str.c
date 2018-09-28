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
    return 0;
}
