#include <stdio.h>

void changeValues(int *a, int *b) {
  int c = *a;

  *a = *b;
  *b = c;
}

void lista06() {
  int x = 4, y = 5;
  int *pX = &x, *pY = &y;
  
  printf("x: %d | y: %d\n\n", x, y);

  changeValues(pX, pY);

  printf("x: %d | y: %d", x, y);
}