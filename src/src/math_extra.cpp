#include "math_extra.h"

lli64 power(lli64 base, lli64 exp) {
    lli64 result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result *= base;
        base *= base;
        exp /= 2;
    }
    return result;
}

lli64 gcd(lli64 a, lli64 b) {
    while (b != 0) {
        lli64 t = b;
        b = a % b;
        a = t;
    }
    return a;
}
