#include "include.h"
#include <iostream>

int main() {
  std::cout << "Hello World!\n";
  for (size_t i = 0; i < 10; ++i) {
    std::cout << get_rnd() << "\n";
  }
  return 0;
}
