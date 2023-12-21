cc_library(
    name = "fmtlog",
    srcs = ["fmtlog.h","fmtlog-inl.h"],
    # srcs = glob(["include/fmt/*.cc","include/fmt/*.h"]),
    hdrs = [
        "fmtlog.h",
    ],
    defines = ["FMTLOG_HEADER_ONLY"],
    include_prefix = "fmtlog",
    # includes = ["fmtlog"],
    # # includes = [
    #     "include",
    #     "src",
    # ],
    # strip_include_prefix = "include",
    visibility = ["//visibility:public"],
    deps = ["@fmt//:fmt"]
)

cc_binary(
    name = "demo",
    srcs = ["main.cpp"],
    # defines = ["FMTLOG_HEADER_ONLY"],
    deps = [":fmtlog"],
    linkopts = ["-lpthread"],
)
