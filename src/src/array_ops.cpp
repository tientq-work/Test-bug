#include "array_ops.h"

lli64 sum_array(const std::vector<lli64>& arr) {
    lli64 sum = 0;
    for (auto v : arr) sum += v;
    return sum;
}

lli64 max_array(const std::vector<lli64>& arr) {
    lli64 m = arr[0];
    for (auto v : arr) if (v > m) m = v;
    return m;
}
