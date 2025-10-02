#include <folly/init/Init.h>
#include <folly/String.h>
#include <iostream>

int main(int argc, char* argv[]) {
    folly::init(&argc, &argv);

    std::string msg = "Hello Folly!";
    folly::toLowerAscii(msg);

    std::cout << msg << std::endl;
    return 0;
}