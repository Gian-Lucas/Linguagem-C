#include <stdio.h>

struct Address {
  char *street;
  int number;
};

struct Person {
  char *name;
  int age;
  struct Address address;
};

void structs() {
  struct Person gian;

  gian.name = "Gian K";
  gian.age = 18;
  gian.address.number = 227;
  gian.address.street = "Rua União Flasco";
  
}