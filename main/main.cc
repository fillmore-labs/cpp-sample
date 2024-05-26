#include "main/fizzbuzz.h"
#include <iostream>

int main(int, char **) {
  auto fizzbuzz = FizzBuzz::Create();

  for (int i = 1; i <= 100; i++) {
    std::cout << fizzbuzz->calc(i) << std::endl;
  }

  return 0;
}
