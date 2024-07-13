cc_library(
    name = "libb_base",
    srcs = ["boring.cpp", "boring.h"],
    hdrs = glob(["*.hxx", "*.h"]),
    deps = [
        "//cc_shared_lib:base_include_dir",
        "//cc_shared_lib/liba:liba_base",
    ],
    visibility = ["//cc_shared_lib:__subpackages__"],
    local_defines = ["IPLIB=libb"],
)

cc_shared_library(
    name = "libb",
    deps = ["libb_base"],
    dynamic_deps = ["//cc_shared_lib/liba:liba"],
    visibility = ["//cc_shared_lib:__subpackages__"],
)
