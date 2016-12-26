/*
 * MIT License
 * 
 * Copyright (c) 2016 Takuya Sawada
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include <iostream>
#include <iomanip>
#include <iterator>
#include <array>
#include "crc32.hpp"

int main(int argc, char **argv)
{
	static_cast<void>(argc);
	static_cast<void>(argv);

	uint32_t crc = 0xFFFFFFFF;

	std::noskipws(std::cin);
	std::istream_iterator<uint8_t> head(std::cin), tail;
	crc = crc32<IEEE8023_CRC32_POLYNOMIAL>(crc, head, tail);

	std::cout << std::hex;
	std::cout << std::showbase;
	std::cout << std::setw(8);
 	std::cout << std::setfill('0');
	std::cout << crc << std::endl;

	return EXIT_SUCCESS;
}
