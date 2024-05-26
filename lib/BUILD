load("@rules_cc//cc:defs.bzl", "cc_library")
load("//:flags.bzl", "COMMON_COPTS")

cc_library(
    name = "fizzbuzz",
    srcs = ["fizzbuzz.cc"],
    copts = COMMON_COPTS,
    visibility = ["//visibility:public"],
    deps = [
        "//main:fizzbuzz",
        "@abseil-cpp//absl/memory",
        "@abseil-cpp//absl/strings",
    ],
)
