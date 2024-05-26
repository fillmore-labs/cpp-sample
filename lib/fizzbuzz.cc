#include "main/fizzbuzz.h"
#include "absl/memory/memory.h"
#include "absl/strings/string_view.h"
#include <string>

namespace {
constexpr absl::string_view FIZZ = "Fizz";
constexpr absl::string_view BUZZ = "Buzz";
constexpr absl::string_view FIZZBUZZ = "FizzBuzz";
} // namespace

class FizzBuzzImpl : public FizzBuzz {
public:
  virtual std::string calc(int n) const {
    bool divisible_by_3 = n % 3 == 0;
    bool divisible_by_5 = n % 5 == 0;

    if (divisible_by_3 && divisible_by_5) {
      return std::string(FIZZBUZZ);
    } else if (divisible_by_3) {
      return std::string(FIZZ);
    } else if (divisible_by_5) {
      return std::string(BUZZ);
    } else {
      return std::to_string(n);
    }
  }
};

std::unique_ptr<FizzBuzz> FizzBuzz::Create() {
  return absl::WrapUnique(new FizzBuzzImpl());
}
