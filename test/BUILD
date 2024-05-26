load("@rules_cc//cc:defs.bzl", "cc_library", "cc_test")
load("//:flags.bzl", "COMMON_COPTS")

cc_library(
    name = "test",
    srcs = ["fizzbuzz-test.cc"],
    copts = COMMON_COPTS,
    deps = [
        "//main:fizzbuzz",
        "@googletest//:gtest",
    ],
)

cc_test(
    name = "fizzbuzz-test",
    size = "small",
    copts = COMMON_COPTS,
    deps = [
        ":test",
        "//lib:fizzbuzz",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "fizzbuzz-test-alt",
    size = "small",
    copts = COMMON_COPTS,
    deps = [
        ":test",
        "//lib_alt:fizzbuzz",
        "@googletest//:gtest_main",
    ],
)
