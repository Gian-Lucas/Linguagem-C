#include <stdio.h>

void strings() {
  char nome[20];

  printf("Seu nome: ");
  fgets(nome, 20, stdin);

  printf("%s", nome);

}