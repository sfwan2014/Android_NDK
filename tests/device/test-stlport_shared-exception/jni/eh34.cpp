// { dg-do run { xfail sparc64-*-elf arm-*-pe } }
// { dg-options "-fexceptions" }

#include <exception>
#include <stdlib.h>

void my_unexpected() {
  exit (0);
}

void foo() throw () { throw "Hi"; }

int main() {
  std::set_unexpected (my_unexpected);
  foo();
  return 1;
}
