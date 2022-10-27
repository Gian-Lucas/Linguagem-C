#include <stdio.h>
#include <stdlib.h>

void lista02() {
  int numeros[15];

  int i, quantPares = 0, quantImpares = 0;
  for (i = 0; i < 15; i++) {
    printf("Digite o %dº valor: ", i + 1);
    scanf("%d", &numeros[i]);

    if (numeros[i] % 2 == 0) {
      quantPares += 1;
    } else {
      quantImpares += 1;
    }
  }

  int *pares = (int *)malloc(quantPares * sizeof(int));
  int *impares = (int *)malloc(quantImpares * sizeof(int));

  int paresIndex = 0, imparesIndex = 0;
  for (i = 0; i < 15; i++) {
    if (numeros[i] % 2 == 0) {
      pares[paresIndex] = numeros[i];
      paresIndex += 1;
    } else {
      impares[imparesIndex] = numeros[i];
      imparesIndex += 1;
    }
  }

  printf("\nPares: ");
  for (i = 0; i < quantPares; i++) {
    printf("%d ", pares[i]);
  }

  printf("\nÍmpares: ");
  for (i = 0; i < quantImpares; i++) {
    printf("%d ", impares[i]);
  }

  free(pares);
  free(impares);
}