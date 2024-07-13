cc_library(
    name = "liba_base",
    srcs = ["fun.cpp", "fun.h"],
    hdrs = glob(["*.hxx", "*.h"]),
    deps = ["//cc_shared_lib:base_include_dir"],
    visibility = ["//cc_shared_lib:__subpackages__"],
    local_defines = ["IPLIB=liba"],
)

cc_shared_library(
    name = "liba",
    deps = ["liba_base"],
    visibility = ["//cc_shared_lib:__subpackages__"],
)
