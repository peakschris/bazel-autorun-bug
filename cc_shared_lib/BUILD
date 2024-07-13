# https://ltekieli.com/linux-shared-libraries-with-cmake-and-bazel/

cc_library(
    name = "base_include_dir",
    includes = ["."],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "hello",
    srcs = ["main.cpp"],
    local_defines = ["IPLIB=main"],
    deps = [
        "//cc_shared_lib/libb:libb_base",
    ],
    dynamic_deps = [
        #"//cc_shared_lib/liba:liba",
        "//cc_shared_lib/libb:libb",
    ],
    includes = ["."],
    tags = ["manual"],
)
