#include <stdio.h>

typedef struct {
  float p1;
  float p2;
  float p3;
} Aluno;

void lista01() {
  Aluno aluno;
  Aluno *al = &aluno;

  printf("Nota 1: ");
  scanf("%f", &al->p1);

  printf("Nota 2: ");
  scanf("%f", &al->p2);

  printf("Nota 3: ");
  scanf("%f", &al->p3);

  float media = (al->p1 + al->p2 + al->p3) / 3;

  if (media < 7.0) {
    printf("\nReprovado com média %.1f", media);
  } else {
    printf("\nAprovado com média %.1f", media);
  }

}