load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
load("//:flags.bzl", "COMMON_COPTS")

cc_library(
    name = "fizzbuzz",
    hdrs = ["fizzbuzz.h"],
    copts = COMMON_COPTS,
    visibility = ["//visibility:public"],
)

cc_library(
    name = "main",
    srcs = ["main.cc"],
    copts = COMMON_COPTS,
    deps = [
        ":fizzbuzz",
    ],
)

cc_binary(
    name = "cpp-sample",
    copts = COMMON_COPTS,
    visibility = ["//visibility:public"],
    deps = [
        ":main",
        "//lib:fizzbuzz",
    ],
)

cc_binary(
    name = "cpp-sample-alt",
    copts = COMMON_COPTS,
    visibility = ["//visibility:public"],
    deps = [
        ":main",
        "//lib_alt:fizzbuzz",
    ],
)
