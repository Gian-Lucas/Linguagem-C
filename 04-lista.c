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

void lista04() {
  int quantAlunos, quantNotasBaixas = 0;
  printf("Quantidade de alunos: ");
  scanf("%d", &quantAlunos);

  float notas[quantAlunos];

  int i;
  for (i = 0; i < quantAlunos; i++) {
    printf("Nota do %dº aluno: ", i + 1);
    scanf("%f", &notas[i]);
    if (notas[i] < 5.0) {
      quantNotasBaixas += 1;
    }
  }

  int *pQuantNotasBaixas = &quantNotasBaixas;

  float *notasBaixas = separaNotasBaixas(notas, quantAlunos, pQuantNotasBaixas);

  for (i = 0; i < *pQuantNotasBaixas; i++) {
    printf("%.1f ", notasBaixas[i]);
  }
}