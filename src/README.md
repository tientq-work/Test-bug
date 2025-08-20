# TestBugLLI64

Project C++ sử dụng nhiều file và kiểu dữ liệu `lli64` (long long int 64-bit).

## Cấu trúc thư mục
- `include/` : Chứa file header (`utils.h`, `math_ops.h`)
- `src/`     : Chứa file nguồn (`main.cpp`, `math_ops.cpp`)
- `tests/`   : Dành cho test (chưa có file mẫu)
- `CMakeLists.txt` : File cấu hình build với CMake

## Build
```sh
cd src
cmake -B build
cmake --build build
```

## Run
```sh
./build/TestBugLLI64
```
