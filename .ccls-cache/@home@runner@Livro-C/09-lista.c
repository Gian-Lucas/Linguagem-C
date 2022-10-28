#include <stdio.h>

char situacao(float p1, float p2, float p3, int faltas, int aulas,
              float *media) {

  float porcentagemFaltas = (faltas * 100) / aulas;

  float med = (p1 + p2 + p3) / 3;
  *media = med;

  if (porcentagemFaltas > 25.0) {
    return 'F';

  } else if (med < 6.0) {
    return 'R';
  }

  return 'A';
}

void lista09() {
  float p1, p2, p3, media;
  int faltas, aulas;

  float *pMedia = &media;

  printf("Digite o p1, p2, p3, faltas e aulas, respectivamente\n\n");
  scanf("%f %f %f %d %d", &p1, &p2, &p3, &faltas, &aulas);

  char sit = situacao(p1, p2, p3, faltas, aulas, pMedia);

  printf("Média: %.1f\nSituação: ", media);

  switch (sit) {
  case 'A':
    printf("APROVADO");
    break;

  case 'R':
    printf("REPROVADO");
    break;

  case 'F':
    printf("REPROVADO POR FALTAS");
    break;
  }
}