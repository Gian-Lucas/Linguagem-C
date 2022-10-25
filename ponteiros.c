#include <stdio.h>

void ponteiros() {

  int n = 6;
  int *p = &n;
  // int *p;
  // p = &n;

  // *p = 10;
  
  printf("%p\n", p);
  printf("%d", *p);
  
}