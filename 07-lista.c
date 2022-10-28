#include <stdio.h>


void lista07() {

  int x = 20;
  int *px = &x;

  printf("x: %d\n\n", x);

  (*px) /= 5;

  printf("x: %d", x);

}