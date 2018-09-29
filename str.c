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

char * mystrncat(char * dest, char * source, int n) {
  int lenDest = mystrlen(dest);
  // printf("%d\n", lenDest);
  char *p = dest + lenDest;
  while(* source && n) {
    *p = *source;
    p++;
    source++;
    n--;
  }
	return dest;
}
