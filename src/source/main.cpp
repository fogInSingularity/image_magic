#include <iostream>

#include "check_endian.h"

int main (const int argc, const char** argv) {
    std::cout << "hello image_magic\n";
    std::cout << CheckEndianOrderStr() << std::endl;
}