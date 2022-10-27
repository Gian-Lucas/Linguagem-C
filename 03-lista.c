#include <stdio.h>
#include <stdlib.h>

float *separaNotasBaixas(float notas[], int quantNotas, int *quantNotasBaixas) {
  float *notasBaixas = (float *)malloc(*quantNotasBaixas * sizeof(float));

  int i, notasBaixasIndex = 0;

  for (i = 0; i < quantNotas; i++) {
    if (notas[i] < 5.0) {
      notasBaixas[notasBaixasIndex] = notas[i];
      notasBaixasIndex += 1;
    }
  }

  return notasBaixas;
}

void lista03() {
  float notasDaTurma[10] = {2.8, 1.7, 8.8, 4, 3.2, 6.5, 1, 5.4, 10, 9.7};
  int quantNotasBaixas = 5;
  int *pBaixas = &quantNotasBaixas;

  float *notasBaixasTurma = separaNotasBaixas(notasDaTurma, 10, pBaixas);

  int i;
  for(i = 0; i < *pBaixas; i++) {
    printf("%.1f ", notasBaixasTurma[i]);
  }
}