/**
 ** ==================================================================================
 ** █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█
 ** █  Bitset - Comprehensive C++ Programming Guide                        █
 ** █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█
 * 
 ** @description A comprehensive guide to C++ Bitset implementation and best practices.
 **              Part of the C++ Programming Header Series.
 * 
 * @author      Shahrear Hossain Shawon
 * @github      algoscienceacademy
 * @institution International Islamic University Chittagong (IIUC)
 * 
 * @version     1.0.0
 * @date        Created: January 27, 2025
 *              Updated: January 29, 2025
 * 
 * @credits     C++ Standard Library
 *              C++ Reference
 *              ChatGPT
 * 
 * @license     MIT License
 * 
 * @copyright   Copyright (c) 2025
 * 
 *? Permission is hereby granted, free of charge, to any person obtaining a copy
 *? of this software and associated documentation files (the "Software"), to deal
 *? in the Software without restriction, including without limitation the rights
 *? to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *? copies of the Software, and to permit persons to whom the Software is
 *? furnished to do so, subject to the following conditions: 
 *? The above copyright notice and this permission notice shall be included in all
 *? copies or substantial portions of the Software.
 * 
 *! THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *! IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *! FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *! AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *! LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *! OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *! SOFTWARE.
 ** ==================================================================================
 */

/**
**=======================================================================================
*?|                     Mastering <bitset> in C++: A Complete Learning Guide             |
**=======================================================================================

*?Description:
*!------------
**The <bitset> header in C++ provides a powerful way to handle fixed-size binary data 
**efficiently. Unlike vector<bool>, which is dynamically allocated, std::bitset<N> is 
**memory-efficient, fast, and ideal for bitwise operations.

*?Key Features:
*!-------------------------------
** - Fixed-size sequence of N bits
** - Memory efficient implementation
** - Fast bitwise operations
** - Compile-time size determination
** - Direct bit manipulation capabilities

*Common Use Cases:
----------------
1. Flag management
2. Binary operations
3. State tracking
4. Memory-efficient boolean arrays
5. Bit manipulation tasks

=======================================================================================*/

/**
**======================== Key <bitset> Features ===========================
*?|  Feature      | Description                  | Example                  |
**|---------------|------------------------------|--------------------------|
**| .set()        | Sets all bits to 1           | b.set();                 |
**| .reset()      | Sets all bits to 0           | b.reset();               |
**| .flip()        | Toggles all bits             | b.flip();                 |
**| .count()      | Returns number of 1s         | b.count();               |
**| .any()        | Checks if any bit is 1       | b.any();                 |
**| .none()       | Checks if all bits are 0     | b.none();                |
**| .size()       | Returns total bit size       | b.size();                |
**| .test(i)      | Checks if bit at index i     | b.test(3);               |
**| .to_ulong()   | Converts to unsigned long    | b.to_ulong();            |
**| .to_string()  | Converts to binary string    | b.to_string();           |
**========================================================================*/


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

/* ---------------------------Example 3: Bitwise Operations-------------------------*/

// #include <bitset>
// #include <iostream>

// int main() {
//     std::bitset<8> b1("1100");
//     std::bitset<8> b2("1010");

//     std::cout << "b1 & b2: " << (b1 & b2) << "\n"; // AND
//     std::cout << "b1 | b2: " << (b1 | b2) << "\n"; // OR
//     std::cout << "b1 ^ b2: " << (b1 ^ b2) << "\n"; // XOR

//     return 0;
// }

/*============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
b1 & b2: 1000
b1 | b2: 1110
b1 ^ b2: 0110
=====================================================================*/


/* ----------------------------Example 4: Counting Bits and Checking Specific Bits-------------*/

// #include <bitset>
// #include <iostream>

// int main() {
//     std::bitset<8> b("11010010");

//     std::cout << "Number of set bits: " << b.count() << "\n";    // Count 1s
//     std::cout << "Is bit 3 set? " << b.test(3) << "\n";         // Test bit 3

//     return 0;
// }

/*============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Number of set bits: 4
Is bit 3 set? 1
=====================================================================*/

/* ----------------------------Example 5: Converting std::bitset to Other Formats-----------------*/

// #include <bitset>
// #include <iostream>
// #include <string>

// int main() {
//     std::bitset<8> b("10110110");

//     // Convert to unsigned long
//     unsigned long num = b.to_ulong();
//     std::cout << "Binary to unsigned long: " << num << "\n";

//     // Convert to string
//     std::string str = b.to_string();
//     std::cout << "Binary to string: " << str << "\n";

//     return 0;
// }

/*============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Binary to unsigned long: 182
Binary to string: 10110110
=====================================================================*/

/* ------------------------Example 6: Comparing Two std::bitset Instances --------------*/

// #include <bitset>
// #include <iostream>

// int main() {
//     std::bitset<8> b1("11001100");
//     std::bitset<8> b2("11001100");
//     std::bitset<8> b3("10101010");

//     std::cout << "b1 == b2: " << (b1 == b2) << "\n"; // Equal
//     std::cout << "b1 != b3: " << (b1 != b3) << "\n"; // Not equal

//     return 0;
// }

/*============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
b1 == b2: 1
b1 != b3: 1
=====================================================================*/

/* ----------------------Example 7: Customizing Output with std::bitset-----------------*/

// #include <bitset>
// #include <iostream>

// int main() {
//     std::bitset<8> b("11010101");

//     // Custom print
//     for (size_t i = 0; i < b.size(); ++i) {
//         std::cout << "Bit " << i << ": " << b[i] << "\n";
//     }

//     return 0;
// }

/*============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Bit 0: 1
Bit 1: 0
Bit 2: 1
Bit 3: 0
Bit 4: 1
Bit 5: 0
Bit 6: 1
Bit 7: 1
=====================================================================*/

/* ----------------------------Example 8: Using std::bitset for Binary Addition------*/

// #include <bitset>
// #include <iostream>

// int main() {
//     std::bitset<8> b1("1101");  // 13 in decimal
//     std::bitset<8> b2("1011");  // 11 in decimal

//     // Perform binary addition
//     std::bitset<8> result = b1 ^ b2; // XOR gives sum without carry
//     std::bitset<8> carry = (b1 & b2) << 1; // AND gives carry, shifted left

//     while (carry.any()) {
//         std::bitset<8> temp = result;
//         result = result ^ carry;
//         carry = (temp & carry) << 1;
//     }

//     std::cout << "Binary addition result: " << result << "\n";

//     return 0;
// }

/*============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Binary addition result: 000011000
=====================================================================*/

/* --------------------------Example 9: Checking Palindromic Bits-------------------- */

// #include <bitset>
// #include <iostream>

// bool isPalindrome(const std::bitset<8>& bits) {
//     size_t n = bits.size();
//     for (size_t i = 0; i < n / 2; ++i) {
//         if (bits[i] != bits[n - i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     std::bitset<8> b1("10000001"); // Palindrome
//     std::bitset<8> b2("11001001"); // Not a palindrome

//     std::cout << "b1 is palindrome: " << isPalindrome(b1) << "\n";
//     std::cout << "b2 is palindrome: " << isPalindrome(b2) << "\n";

//     return 0;
// }

/*============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
b1 is palindrome: 1
b2 is palindrome: 0
=====================================================================*/

/* ------------------------ Example 10: Representing Permissions Using std::bitset------------------------*/

// #include <bitset>
// #include <iostream>

// int main() {
//     // Permissions: Read, Write, Execute
//     std::bitset<3> userPerms("101"); // Read and Execute
//     std::bitset<3> groupPerms("110"); // Read and Write

//     std::cout << "User Permissions: " << userPerms << "\n";
//     std::cout << "Group Permissions: " << groupPerms << "\n";

//     // Check specific permissions
//     std::cout << "User has write permission: " << userPerms.test(1) << "\n";
//     std::cout << "Group has execute permission: " << groupPerms.test(0) << "\n";

//     return 0;
// }

/*============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
User Permissions: 101
Group Permissions: 110
User has write permission: 0
Group has execute permission: 0
=====================================================================*/


/*
 * ████████╗██╗  ██╗ █████╗ ███╗   ██╗██╗  ██╗    ██╗   ██╗ ██████╗ ██╗   ██╗
 * ╚══██╔══╝██║  ██║██╔══██╗████╗  ██║██║  ██║    ██║   ██║██╔═══██╗██║   ██║
 *    ██║   ███████║███████║██╔██╗ ██║███████║    ██║   ██║██║   ██║██║   ██║
 *    ██║   ██╔══██║██╔══██║██║╚██╗██║██╔══██║    ╚██╗ ██╔╝██║   ██║██║   ██║
 *    ██║   ██║  ██║██║  ██║██║ ╚████║██║  ██║     ╚████╔╝ ╚██████╔╝╚██████╔╝
 *    ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝      ╚═══╝   ╚═════╝  ╚═════╝
 * 
 * ██████╗ ██╗   ██╗███████╗███████╗ █████╗ ███╗   ██╗██╗   ██╗ ██████╗ ██╗   ██╗
 * ██╔══██╗██║   ██║██╔════╝██╔════╝██╔══██╗████╗  ██║██║   ██║██╔═══██╗██║   ██║
 * ██████╔╝██║   ██║███████╗███████╗███████║██╔██╗ ██║██║   ██║██║   ██║██║   ██║
 * ██╔═══╝ ██║   ██║╚════██║╚════██║██╔══██║██║╚██╗██║██║   ██║██║   ██║██║   ██║
 * ██║     ╚██████╔╝███████║███████║██║  ██║██║ ╚████║╚██████╔╝╚██████╔╝╚██████╔╝
 * ╚═╝      ╚═════╝ ╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝  ╚═════╝  ╚═════╝ 
 */



