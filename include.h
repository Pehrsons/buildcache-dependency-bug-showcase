#ifndef include_h_
#define include_h_

#include <random>

int get_rnd() {
  static std::random_device rnd;
  return rnd();
}

#endif
