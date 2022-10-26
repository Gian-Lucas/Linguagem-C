#include <stdio.h>
#include <stdlib.h>

void alloc() {

  int *p;
  p = (int *)malloc(5 * sizeof(int));

  int i;
  for (i = 0; i < 5; i++) {
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &p[i]);
  }

  free(p);
  p = NULL;
}