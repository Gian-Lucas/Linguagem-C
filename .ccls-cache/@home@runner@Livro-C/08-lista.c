#include <stdio.h>

void lista08() {
  int a = 25;
  int *pa = &a;
  int b = *pa + a;
  printf("%d \n%p \n%p \n%d \n%d \n%p\n", a, pa, &a, *pa, b, &b);

  /*

  25
  endA
  endA
  25
  50
  endB

*/
}