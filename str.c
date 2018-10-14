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

char * mystrcpy( char *dest, char *source ) {
  char *p = dest;
  while (*source) {
    dest++;
    source++;
    *dest = *source;
  }
  return p;
}

char * mystrncat(char * dest, char * source, int n) {
  int lenDest = mystrlen(dest);
  // printf("%d\n", lenDest);
  char *p = dest + lenDest; // set the pointer at the end of dest
  // while reaching the end of source or reaching n characters
  while(*source && n) {
    *p = *source;
    p++;
    source++;
    n--;
  }
  return dest;
}

int mystrcmp( char *s1, char *s2 ) {
  char * myPointCmpOne = s1;
  char * myPointCmpTwo = s2;
  int lenS1 = mystrlen(s1);
  int lenS2 = mystrlen(s2);
  int lenComp = 0;
  int i;
  if(lenS1 >= lenS2) {
    lenComp = lenS1;
  }
  if(lenS2 > lenS1) {
    lenComp = lenS2;
  }
  for(i = 0; i < lenComp ; i ++) {
    if(*(myPointCmpOne + i) > *(myPointCmpTwo + i)) {
      return 1;
    }
    if(*(myPointCmpOne + i) < *(myPointCmpTwo + i)) {
      return -1;
    }
  }
  if(lenS1 > lenS2) {
    return 1;
  }
  if(lenS2 > lenS1) {
    return -1;
  }
  return 0;
}

char * mystrchr( char *s, char c ) {
  char * ansPoint = s;
  char * chrPoint = s;
  for(int i = 0; i < mystrlen(s); i ++){
    if(*(chrPoint + i) == c){
      return (chrPoint + i);
    }
  }
  return ansPoint;
}
