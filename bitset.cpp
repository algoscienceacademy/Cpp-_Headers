/**
 ** ==================================================================================
 *? █▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█
 *? █  Bitset - Comprehensive C++ Programming Guide                        █
 *? █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█
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

*?Common Use Cases:
*!----------------
**1. Flag management
**2. Binary operations
**3. State tracking
**4. Memory-efficient boolean arrays
**5. Bit manipulation tasks

**=======================================================================================*/

/**
*?======================== Key <bitset> Features ===========================
*?|  Feature      | Description                  | Example                  |
**|---------------|------------------------------|--------------------------|
**| .set()        | Sets all bits to 1           | b.set();                 |
**| .reset()      | Sets all bits to 0           | b.reset();               |
**| .flip()        | Toggles all bits             | b.flip();               |
**| .count()      | Returns number of 1s         | b.count();               |
**| .any()        | Checks if any bit is 1       | b.any();                 |
**| .none()       | Checks if all bits are 0     | b.none();                |
**| .size()       | Returns total bit size       | b.size();                |
**| .test(i)      | Checks if bit at index i     | b.test(3);               |
**| .to_ulong()   | Converts to unsigned long    | b.to_ulong();            |
**| .to_string()  | Converts to binary string    | b.to_string();           |
**========================================================================*/


/**
*? ============================ Pro Tips for Learning <bitset> Faster ============================
**|                                                                                             |
*?| 1. Visualize Binary Representations                                                         |
**|    - Use std::bitset<N>::to_string() for clear binary visualization                         |
**|    - Practice reading and interpreting binary patterns                                      |
**|    - Experiment with different sizes of bitsets                                             |
**|                                                                                             |
*?| 2. Write Small Experiments                                                                  |
**|    - Practice with fundamental operations:                                                  |
**|      * set() for setting bits to 1                                                          |
**|      * reset() for clearing bits to 0                                                       |
**|      * flip() for toggling bits                                                             |
**|      * count() for counting set bits                                                        |
**|                                                                                             |
*?| 3. Solve Bitwise Problems                                                                   |
**|    - Implement common bit manipulation algorithms:                                          |
**|      * Parity checking                                                                      |
**|      * Gray code generation                                                                 |
**|      * Hamming code implementation                                                          |
**|      * Subnet mask calculations                                                             |
**|                                                                                             |
*?| 4. Performance Comparison                                                                   |
**|    - Compare with vector<bool>:                                                             |
**|      * Memory efficiency                                                                    |
**|      * Access speed                                                                         |
**|      * Operation performance                                                                |
**|                                                                                             |
*?| 5. Real-World Applications                                                                  |
**|    - Study practical uses in:                                                               |
**|      * Cryptography algorithms                                                              |
**|      * Data compression                                                                     |
**|      * Network programming (IPv4/IPv6)                                                      |
**|      * Error correction codes                                                               |
**|      * Bloom filters implementation                                                         |
**|                                                                                             |
**=============================================================================================*/

//?----------------------------- Implementation of <bitset> ------------------------------------//

//?--------------------------------Example 1: Basic Operations with <bitset>---------------------//

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

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Initial bitset:          10101010
After setting 0th bit:   10101011
After resetting 1st bit: 10101001
After flipping all bits: 01010110
Number of set bits:      4
Bit at position 2:       1
*?=====================================================================*/

//? ---------------------------Example 2: Modifying Bits-------------------------*/

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

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
After modifications: 10101011
*?=====================================================================*/

//? ---------------------------Example 3: Bitwise Operations-------------------------*/

// #include <bitset>
// #include <iostream>

// int main() {
//     std::bitset<4> b1("1100");
//     std::bitset<4> b2("1010");

//     std::cout << "b1 & b2: " << (b1 & b2) << "\n"; // AND
//     std::cout << "b1 | b2: " << (b1 | b2) << "\n"; // OR
//     std::cout << "b1 ^ b2: " << (b1 ^ b2) << "\n"; // XOR

//     return 0;
// }

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
b1 & b2: 1000
b1 | b2: 1110
b1 ^ b2: 0110
*?=====================================================================*/


//? ----------------------------Example 4: Counting Bits and Checking Specific Bits-------------*/

// #include <bitset>
// #include <iostream>

// int main() {
//     std::bitset<8> b("11010010");

//     std::cout << "Number of set bits: " << b.count() << "\n";    // Count 1s
//     std::cout << "Is bit 3 set? " << b.test(3) << "\n";         // Test bit 3

//     return 0;
// }

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Number of set bits: 4
Is bit 3 set? 0
*?=====================================================================*/

//? ----------------------------Example 5: Converting std::bitset to Other Formats-----------------*/

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

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Binary to unsigned long: 182
Binary to string: 10110110
*?=====================================================================*/

//? ------------------------Example 6: Comparing Two std::bitset Instances --------------*/

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

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
b1 == b2: 1
b1 != b3: 1
*?=====================================================================*/

//? ----------------------Example 7: Customizing Output with std::bitset-----------------*/

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

/**
*?============================ Program Output ============================
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
*?=====================================================================*/

//? ----------------------------Example 8: Using std::bitset for Binary Addition------*/

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

/** 
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Binary addition result: 00011000
*?=====================================================================*/

//? --------------------------Example 9: Checking Palindromic Bits-------------------- */

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

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
b1 is palindrome: 1
b2 is palindrome: 0
*?=====================================================================*/

//? ------------------------ Example 10: Representing Permissions Using std::bitset------------------------*/

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

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
User Permissions: 101
Group Permissions: 110
User has write permission: 0
Group has execute permission: 0
*?=====================================================================*/

//? ------------------------ Example 11: Masking Bits------------------------*/

// #include <bitset>
// #include <iostream>

// int main() {
//     std::bitset<8> b("11110000"); // Original bits
//     std::bitset<8> mask("00001111"); // Mask to isolate last 4 bits

//     std::bitset<8> result = b & mask;

//     std::cout << "Original bits: " << b << "\n";
//     std::cout << "Masked result: " << result << "\n";

//     return 0;
// }

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Original bits: 11110000
Masked result: 00000000
*?=====================================================================*/

//? ------------------------ Example 12: Using std::bitset for Bit Rotation------------------------*/

// #include <bitset>
// #include <iostream>

// std::bitset<8> rotateLeft(const std::bitset<8>& bits, size_t n) {
//     return (bits << n) | (bits >> (8 - n));
// }

// std::bitset<8> rotateRight(const std::bitset<8>& bits, size_t n) {
//     return (bits >> n) | (bits << (8 - n));
// }

// int main() {
//     std::bitset<8> b("10110011");

//     std::cout << "Original bits:  " << b << "\n";
//     std::cout << "After left rotation by 2: " << rotateLeft(b, 2) << "\n";
//     std::cout << "After right rotation by 2: " << rotateRight(b, 2) << "\n";

//     return 0;
// }

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Original bits:  10110011
After left rotation by 2: 11001101
After right rotation by 2: 11101001
*?=====================================================================*/

//? ------------------------ Example 13: Finding the First Set and Unset Bit------------------------*/

// #include <bitset>
// #include <iostream>

// int main() {
//     std::bitset<8> b("10101000");

//     // Find the first set bit
//     size_t firstSet = b.to_string().find('1');
//     std::cout << "First set bit at index: " << firstSet << "\n";

//     // Find the first unset bit
//     size_t firstUnset = b.to_string().find('0');
//     std::cout << "First unset bit at index: " << firstUnset << "\n";

//     return 0;
// }

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
First set bit at index: 0
First unset bit at index: 3
*?=====================================================================*/

//? ------------------------ Example 14: Bitwise Operations on Multiple ------------------------*/

// #include <bitset>
// #include <iostream>

// int main() {
//     std::bitset<8> b1("11001100");
//     std::bitset<8> b2("10101010");

//     std::cout << "b1 AND b2: " << (b1 & b2) << "\n";
//     std::cout << "b1 OR b2: " << (b1 | b2) << "\n";
//     std::cout << "b1 XOR b2: " << (b1 ^ b2) << "\n";

//     // Compound assignment
//     b1 &= b2;
//     std::cout << "b1 after AND with b2: " << b1 << "\n";

//     return 0;
// }

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
b1 AND b2: 10001000
b1 OR b2: 11101110
b1 XOR b2: 01100110
b1 after AND with b2: 10001000
*?=====================================================================*/

//? ------------------------ Example 15: Creating a Simple Bitset-based Set Data Structure-----------------------*/

// #include <bitset>
// #include <iostream>

// class BitsetSet {
// public:
//     BitsetSet(size_t size) : bits(size) {}

//     void add(int index) {
//         bits.set(index);
//     }

//     void remove(int index) {
//         bits.reset(index);
//     }

//     bool contains(int index) {
//         return bits.test(index);
//     }

// private:
//     std::bitset<32> bits;
// };

// int main() {
//     BitsetSet set(32);

//     set.add(5);
//     set.add(10);
//     set.add(15);

//     std::cout << "Contains 5: " << set.contains(5) << "\n";
//     std::cout << "Contains 10: " << set.contains(10) << "\n";
//     std::cout << "Contains 20: " << set.contains(20) << "\n";

//     set.remove(10);
//     std::cout << "Contains 10 after removal: " << set.contains(10) << "\n";

//     return 0;
// }

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Contains 5: 1
Contains 10: 1
Contains 20: 0
Contains 10 after removal: 0
*?=====================================================================*/



//! ------------------- Let's Get Started with Some Bitset Projects ----------------------//



//?------------------------------ Subnet Mask Validation ---------------//

// #include <iostream>
// #include <bitset>
// #include <string>

// bool isValidSubnet(const std::string& binarySubnet) {
//     std::bitset<8> subnet(binarySubnet); 
//     bool foundZero = false;

//     for (int i = 7; i >= 0; --i) {
//         if (subnet.test(i)) {
//             if (foundZero) return false; // If 1 comes after a 0, invalid mask
//         } else {
//             foundZero = true; // Found a 0
//         }
//     }
//     return true;
// }

// int main() {
//     std::string subnet = "11100000"; // Example binary subnet mask
//     std::cout << "Subnet: " << subnet 
//               << (isValidSubnet(subnet) ? " is valid.\n" : " is invalid.\n");
//     return 0;
// }

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Subnet: 11100000 is valid.
*?=====================================================================*/

//? ------------------------ Custom Binary Encryption---------------------//

// #include <iostream>
// #include <bitset>
// #include <string>

// std::string encryptDecrypt(const std::string& input, const std::string& key) {
//     std::bitset<8> keyBits(key); 
//     std::string result = "";

//     for (char ch : input) {
//         std::bitset<8> charBits(ch);
//         charBits ^= keyBits; // XOR for encryption/decryption
//         result += static_cast<char>(charBits.to_ulong());
//     }
//     return result;
// }

// int main() {
//     std::string key = "10101010"; // 8-bit key
//     std::string plaintext = "Hello";
//     std::string encrypted = encryptDecrypt(plaintext, key);
//     std::cout << "Encrypted: " << encrypted << '\n';

//     std::string decrypted = encryptDecrypt(encrypted, key);
//     std::cout << "Decrypted: " << decrypted << '\n';

//     return 0;
// }

/**     
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Encrypted: 
Decrypted: Hello
*?=====================================================================*/

//? ------------------------Efficient Prime Number---------------------//

// #include <iostream>
// #include <bitset>

// const int MAX = 50; // Limit for prime numbers

// void sieveOfEratosthenes() {
//     std::bitset<MAX + 1> primes;
//     primes.set(); // Set all bits to 1 initially
//     primes.reset(0); // 0 is not a prime number
//     primes.reset(1); // 1 is not a prime number

//     for (int p = 2; p * p <= MAX; ++p) {
//         if (primes.test(p)) {
//             for (int i = p * p; i <= MAX; i += p) {
//                 primes.reset(i); // Mark multiples of p as non-prime
//             }
//         }
//     }

//     std::cout << "Prime numbers up to " << MAX << ": ";
//     for (int i = 2; i <= MAX; ++i) {
//         if (primes.test(i)) {
//             std::cout << i << " ";
//         }
//     }
//     std::cout << '\n';
// }

// int main() {
//     sieveOfEratosthenes();
//     return 0;
// }

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
Prime numbers up to 50: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
*?=====================================================================*/

//? ------------------------IPv4 Address Validation---------------------//

// #include <iostream>
// #include <bitset>
// #include <string>
// #include <vector>

// bool isValidIPv4(const std::string& ip) {
//     std::vector<std::string> parts;
//     size_t start = 0, end = 0;

//     while ((end = ip.find('.', start)) != std::string::npos) {
//         parts.push_back(ip.substr(start, end - start));
//         start = end + 1;
//     }
//     parts.push_back(ip.substr(start));

//     if (parts.size() != 4) return false; // Must have 4 parts

//     for (const std::string& part : parts) {
//         if (part.empty() || part.size() > 3) return false; // Invalid part length

//         std::bitset<8> partBits(part);
//         if (partBits.to_ulong() > 255) return false; // Invalid value
//     }
//     return true;
// }

// int main() {
//     std::string ip = "178.228.5.67"; // Example IPv4 address
//     std::cout << "IPv4 Address: " << ip
//               << (isValidIPv4(ip) ? " is valid.\n" : " is invalid.\n");
//     return 0;
// }

/**
*?============================ Program Output ============================
Command: g++ -std=c++11 bitset.cpp -o bitset

Results:
IPv4 Address: 178.228.5.67zsh: abort  
*?=====================================================================*/

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



