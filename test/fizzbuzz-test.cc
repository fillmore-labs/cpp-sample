#include "main/fizzbuzz.h"
#include <gtest/gtest.h>

TEST(FizzBuzzTest, BasicAssertions) {
  auto fizzbuzz = FizzBuzz::Create();

  EXPECT_EQ(fizzbuzz->calc(1), "1");
  EXPECT_EQ(fizzbuzz->calc(3), "Fizz");
  EXPECT_EQ(fizzbuzz->calc(5), "Buzz");
  EXPECT_EQ(fizzbuzz->calc(15), "FizzBuzz");
}
