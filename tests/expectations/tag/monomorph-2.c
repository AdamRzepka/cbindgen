#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

struct A;

struct B;

struct List_B {
  struct B *members;
  uintptr_t count;
};

struct List_A {
  struct A *members;
  uintptr_t count;
};

void bar(struct List_B b);

void foo(struct List_A a);
