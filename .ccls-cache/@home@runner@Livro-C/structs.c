#include <stdio.h>

typedef struct {
  char *street;
  int number;
} Address;

typedef struct {
  char *name;
  int age;
  Address address;
} Person;

void structs() {
  Person gian;

  gian.name = "Gian K";
  gian.age = 18;
  gian.address.number = 227;
  gian.address.street = "Rua União Flasco";

  printf("%s", gian.name);
}