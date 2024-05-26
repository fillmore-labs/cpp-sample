#ifndef MAIN_FIZZBUZZ_H_
#define MAIN_FIZZBUZZ_H_

#include <memory>
#include <string>

class FizzBuzz {
public:
  static std::unique_ptr<FizzBuzz> Create();

  virtual std::string calc(int n) const = 0;

  // Move
  FizzBuzz(FizzBuzz &&other) = default;
  FizzBuzz &operator=(FizzBuzz &&other) = default;

  // Copy
  FizzBuzz(const FizzBuzz &) = default;
  FizzBuzz &operator=(const FizzBuzz &) = default;

  virtual ~FizzBuzz() = default;

protected:
  FizzBuzz() = default;
};

#endif
