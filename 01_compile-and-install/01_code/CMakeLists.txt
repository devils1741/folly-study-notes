cmake_minimum_required(VERSION 3.14)
project(hello_folly CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hello_folly main.cpp)
target_include_directories(hello_folly PRIVATE /usr/local/folly/include)

target_link_libraries(hello_folly PRIVATE
    /usr/local/folly/lib/libfolly.a
    /usr/lib/x86_64-linux-gnu/libiberty.a
    /usr/local/lib/libdouble-conversion.so.3.3.0
    /usr/local/fmt-LinEvtf8dWEohYvMDp_C3-VS2ca3wx_mvK0zTHDe0Sc/lib/libfmt.a
    /usr/local/glog-8ytue5D-E5Jl7dp_0QsdqLzWMDPO2HxY8ebKEuQPNqA/lib/libglog.so
    gflags
    glog
    unwind
)
