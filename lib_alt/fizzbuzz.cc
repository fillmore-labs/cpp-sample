#include "main/fizzbuzz.h"
#include "absl/memory/memory.h"
#include "absl/strings/string_view.h"
#include <stdexcept>
#include <string>

namespace {
constexpr absl::string_view FIZZ = "Fizz";
constexpr absl::string_view BUZZ = "Buzz";
constexpr absl::string_view FIZZBUZZ = "FizzBuzz";
} // namespace

class FizzBuzzImpl : public FizzBuzz {
public:
  virtual std::string calc(int n) const {
    long n2 = (long)n * n;
    long n4 = n2 * n2;

    switch (n4 % 15) {
    case 1:
      return std::to_string(n);

    case 6:
      return std::string(FIZZ);

    case 10:
      return std::string(BUZZ);

    case 0:
      return std::string(FIZZBUZZ);

    default:
      throw std::logic_error("Unexpected residue in fizzbuzz.");
    }
  }
};

std::unique_ptr<FizzBuzz> FizzBuzz::Create() {
  return absl::WrapUnique(new FizzBuzzImpl());
}
