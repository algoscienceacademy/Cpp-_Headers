/******************************************************************************
 * Title: Bitset - Comprehensive C++ Programming Guide
 * 
 * Description:
 * A comprehensive guide to C++ Bitset implementation and best practices.
 * Part of the C++ Programming Header Series.
 * 
 * Author: Shahrear Hossain Shawon
 * GitHub: algoscienceacademy
 * Institution: International Islamic University Chittagong (IIUC)
 * 
 * Version: 1.0.0
 * Created: January 27, 2025
 * Updated: January 29, 2025
 * 
 * Credits:
 * - C++ Standard Library
 * - C++ Reference
 * - ChatGPT
 * 
 * License: MIT License
 * 
 * Copyright (c) 2025
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
 ******************************************************************************/

/*=======================================================================================
|                     Mastering <bitset> in C++: A Complete Learning Guide               |
========================================================================================

Description:
------------
The <bitset> header in C++ provides a powerful way to handle fixed-size binary data 
efficiently. Unlike vector<bool>, which is dynamically allocated, std::bitset<N> is 
memory-efficient, fast, and ideal for bitwise operations.

Key Features:
-------------
- Fixed-size sequence of N bits
- Memory efficient implementation
- Fast bitwise operations
- Compile-time size determination
- Direct bit manipulation capabilities

Common Use Cases:
----------------
1. Flag management
2. Binary operations
3. State tracking
4. Memory-efficient boolean arrays
5. Bit manipulation tasks

=======================================================================================*/

/*======================== Key <bitset> Features ===========================
|  Feature      | Description                  | Example                  |
|---------------|------------------------------|--------------------------|
| .set()        | Sets all bits to 1           | b.set();                 |
| .reset()      | Sets all bits to 0           | b.reset();               |
| .flip()        | Toggles all bits             | b.flip();                 |
| .count()      | Returns number of 1s         | b.count();               |
| .any()        | Checks if any bit is 1       | b.any();                 |
| .none()       | Checks if all bits are 0     | b.none();                |
| .size()       | Returns total bit size       | b.size();                |
| .test(i)      | Checks if bit at index i     | b.test(3);               |
| .to_ulong()   | Converts to unsigned long    | b.to_ulong();            |
| .to_string()  | Converts to binary string    | b.to_string();           |
========================================================================*/


/*============================ Pro Tips for Learning <bitset> Faster ============================
|                                                                                             |
| 1. Visualize Binary Representations                                                         |
|    - Use std::bitset<N>::to_string() for clear binary visualization                         |
|    - Practice reading and interpreting binary patterns                                      |
|    - Experiment with different sizes of bitsets                                             |
|                                                                                             |
| 2. Write Small Experiments                                                                  |
|    - Practice with fundamental operations:                                                  |
|      * set() for setting bits to 1                                                          |
|      * reset() for clearing bits to 0                                                       |
|      * flip() for toggling bits                                                              |
|      * count() for counting set bits                                                        |
|                                                                                             |
| 3. Solve Bitwise Problems                                                                   |
|    - Implement common bit manipulation algorithms:                                          |
|      * Parity checking                                                                      |
|      * Gray code generation                                                                 |
|      * Hamming code implementation                                                          |
|      * Subnet mask calculations                                                             |
|                                                                                             |
| 4. Performance Comparison                                                                   |
|    - Compare with vector<bool>:                                                             |
|      * Memory efficiency                                                                     |
|      * Access speed                                                                         |
|      * Operation performance                                                                |
|                                                                                             |
| 5. Real-World Applications                                                                  |
|    - Study practical uses in:                                                               |
|      * Cryptography algorithms                                                              |
|      * Data compression                                                                     |
|      * Network programming (IPv4/IPv6)                                                      |
|      * Error correction codes                                                               |
|      * Bloom filters implementation                                                          |
|                                                                                             |
=============================================================================================*/

//----------------------------- Implementation of <bitset> ------------------------------------//

/*--------------------------------Example 1: Basic Operations with <bitset>---------------------*/

// #include <iostream>
// #include <bitset>

// int main() {
//     std::bitset<8> bits("10101010"); // 8-bit binary number

//     std::cout << "Initial bitset: " << bits << '\n';

//     bits.set(0); // Set the 0th bit
//     std::cout << "After setting 0th bit: " << bits << '\n';

//     bits.reset(1); // Reset the 1st bit
//     std::cout << "After resetting 1st bit: " << bits << '\n';

//     bits.flip(); // Flip all bits
//     std::cout << "After flipping all bits: " << bits << '\n';

//     std::cout << "Number of set bits: " << bits.count() << '\n';
//     std::cout << "Bit at position 2: " << bits.test(2) << '\n';

//     return 0;
// }

/*============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Initial bitset:          10101010
After setting 0th bit:   10101011
After resetting 1st bit: 10101001
After flipping all bits: 01010110
Number of set bits:      4
Bit at position 2:       1
=====================================================================*/

/* ---------------------------Example 2: Modifying Bits-------------------------*/

// #include <bitset>
// #include <iostream>

// int main() {
//     std::bitset<8> b("10101010");

//     b.set(0);    // Set bit 0 to 1
//     b.reset(1);  // Reset bit 1 to 0
//     b.flip(2);   // Flip bit 2

//     std::cout << "After modifications: " << b << "\n";

//     return 0;
// }

/*============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
After modifications: 10101011
=====================================================================*/
