CRC32 Implementation with C++11 (constexpr)
====
[![MIT licensed](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/eternalharvest/crc32-11/master/LICENSE)
[![Build Status](https://travis-ci.org/eternalharvest/crc32-11.svg?branch=master)](https://travis-ci.org/eternalharvest/crc32-11)

## Abstract
This is one of the CRC32 implementation with C++ generics template and C++11 constexpr feature.
This C++ code automatically generate CRC32 lookup table from polynomial constant value in compile-time.

## Prerequisites

* CMake
* C++ compiler which supports C++11 (e.g. clang++ or g++)

## How to build

Run the following command in the top of source tree.
```bash
mkdir build
cd build
```

```bash
CXX=clang++ cmake ..
make
```

## Usage

If you just want to try it, run the following command in the build directory.
There is executable file named 'crc32++11' which calculate CRC32 for each bytes input from stdin.

```bash
./crc32++11 <../LICENSE
0xc875fc6c
```

Or, if you want to use this code within your program, just write as follows.

```C++
#include <vector>
#include "crc32.hpp"

void your_program(const std::vector<uint8_t> &buffer)
{
  crc = crc32<IEEE8023_CRC32_POLYNOMIAL>(0xFFFFFFFF, buffer.begin(), buffer.end());
}
```

Not to mention, you must fill the buffer with the data you want to calculate CRC32.
If you want to use any other version of CRC32 polynominal, replace the keyword 'IEEE8023_CRC32_POLYNOMIAL' with the literal or constant value that you want.

## Contribution

I would like to make this program more versatile.
But i'm not familiar with any other type of CRC calculation method, so please send me a patch which makes this program even better.

**PATCH WELCOME**

## LICENSE
MIT License

Copyright (c) 2016 Takuya Sawada

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
