#include <iostream>
#include "utils.h"
#include "math_ops.h"

int main() {
    lli64 a = 1234567890123456LL;
    lli64 b = 9876543210987654LL;
    std::cout << "Sum: " << add(a, b) << std::endl;
    std::cout << "Multiply: " << multiply(a, b) << std::endl;
    return 0;
}
