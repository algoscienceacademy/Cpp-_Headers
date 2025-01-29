/*======================================================================================
 * Title          : Algorithm Library Guide
 * Description    : Comprehensive C++ Programming Guide for All Header Files
 * 
 * Author         : Shahrear Hossain Shawon
 * Organization   : Algo science Academy
 * GitHub         : algoscienceacademy
 * 
 * Credits        : - C++ Reference
 *                  - C++ Standard Library
 *                  - ChatGPT
 * 
 * Version        : 1.0.0
 * Created        : 27 Jan 2025
 * Last Modified  : 27 Jan 2025
 * License        : MIT License
 *======================================================================================
 * 
 * MIT License
 * 
 * Copyright (c) 2025 Shahrear Hossain Shawon
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
 *======================================================================================*/



/*---------------------------------Algorithm ---------------------------------

The <algorithm> header in C++ is part of the Standard Template Library (STL) 
and provides a rich collection of functions to perform common operations on 
containers like std::vector, std::list, std::deque, and others. It focuses 
on non-modifying and modifying sequence operations, sorting, searching, and more.

-------------------------------------------------------------------------------*/


/*---------------------------------Algorithm Features---------------------------------------------------------------------------------------

  ------------------------------------------------------------------------------------------------------------------------------------------
  | . Modular and Reusable Code             | Contains generic algorithms that can operate on a variety of container types.                |
  |                                         | Uses iterators to provide flexibility in working with different container types.              |
  ..........................................|..............................................................................................|
  | . Non-Modifying Sequence Operations     | Functions that do not alter the input data, such as std::find, std::count, std::all_of, etc.  |
  ..........................................|..............................................................................................|
  | . Modifying Sequence Operations         | Functions that modify the container or range, like std::copy, std::remove, std::replace.     |
  ..........................................|..............................................................................................|
  | . Sorting and Partitioning              | Includes efficient sorting algorithms like std::sort, std::stable_sort, and partitioning      |
  |                                         |                                                              algorithms like std::partition. |
  ..........................................|..............................................................................................|
  | . Searching and Merging                 | Provides functions like std::binary_search, std::merge, and std::lower_bound.                |
  ..........................................|..............................................................................................|
  | . Heap Operations                       | Functions like std::make_heap, std::push_heap, std::pop_heap for working with heaps.         |
  ..........................................|..............................................................................................|
  | . Set Operations                        | Functions like std::set_union, std::set_difference to operate on sorted ranges as            |
  |                                         |                                                                 mathematical sets.           |
  ..........................................|..............................................................................................|
  | . Randomized Algorithms                 | ncludes functions like std::shuffle and std::sample for randomizing ranges.                   |
  ..........................................|..............................................................................................|
  | . Utility Functions                     | Helper functions like std::min, std::max, std::clamp, and std::lexicographical_compare.      |
  ------------------------------------------------------------------------------------------------------------------------------------------

--------------------------------------------------------------------------------------------------------------------------------------------*/

/*----------------------------------------General Categories of Algorithms ---------------------------------------------------

---Non-Modifying Sequence Operations: ---|   Operations that do not change the original range of elements.
                                         | Examples: std::find, std::count, std::mismatch.
..........................................................................................................
---Modifying Sequence Operations: -------|   Operations that modify the original range of elements.
                                         | Examples: std::copy, std::remove, std::replace.
..........................................................................................................
---Sorting and Partitioning: ------------|   Operations that sort or partition the elements in a range.
                                         | Examples: std::sort, std::stable_sort, std::partition.         
..........................................................................................................
---Binary Search: -----------------------|   Operations that search for an element in a sorted range.
                                         | Examples: std::binary_search, std::lower_bound, std::upper_bound.
..........................................................................................................
---Heap Operations: ---------------------|   Operations that work with heap data structures.
                                         | Examples: std::make_heap, std::push_heap, std::pop_heap.       
..........................................................................................................
---Set Operations: ----------------------|   Operations that work with sorted ranges as mathematical sets.
                                         | Examples: std::set_union, std::set_difference.                 
..........................................................................................................
---Randomized Algorithms: ---------------|   Operations that involve randomness.
                                         | Examples: std::shuffle, std::sample.                        
..........................................................................................................
---Numeric Operations: ------------------|   Operations that work with numeric values.
                                         | Examples: std::accumulate, std::inner_product.                 
..........................................................................................................


----------------------------------------------------------------------------------------------------------------------------*/

/*----------------------------------------Algorithm Functions ---------------------------------------------------

---Non-Modifying Sequence Operations: ---|   all_of, any_of, none_of, for_each, count, count_if, mismatch, equal, find, find_if, find_if_not, find_end, find_first_of, adjacent_find, search, search_n.
..........................................................................................................
---Modifying Sequence Operations: -------|   copy, copy_n, copy_if, copy_backward, move, move_backward, fill, fill_n, transform, generate, generate_n, remove, remove_if, remove_copy, remove_copy_if, replace, replace_if, replace_copy, replace_copy_if, swap, swap_ranges, iter_swap, reverse, reverse_copy, rotate, rotate_copy, random_shuffle, shuffle.
..........................................................................................................
---Sorting and Partitioning: ------------|   is_sorted, is_sorted_until, sort, partial_sort, partial_sort_copy, stable_sort, nth_element, partition, partition_point, is_partitioned, inplace_merge.
..........................................................................................................
---Binary Search: -----------------------|   lower_bound, upper_bound, binary_search, equal_range.
..........................................................................................................
---Heap Operations: ---------------------|   is_heap, is_heap_until, make_heap, push_heap, pop_heap, sort_heap.
..........................................................................................................
---Set Operations: ----------------------|   merge, includes, set_union, set_intersection, set_difference, set_symmetric_difference.
..........................................................................................................
---Randomized Algorithms: ---------------|   random_shuffle, shuffle, sample.
..........................................................................................................

----------------------------------------------------------------------------------------------------------------------------*/

/*-------------------------------------------------Example--------------------------------------------------*/


/*-----Example 1: std::max_element and std::min_element-------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {10, 20, 5, 15, 30};

//     // Find the maximum element
//     auto max_it = std::max_element(nums.begin(), nums.end());
//     std::cout << "Maximum element: " << *max_it << "\n";

//     // Find the minimum element
//     auto min_it = std::min_element(nums.begin(), nums.end());
//     std::cout << "Minimum element: " << *min_it << "\n";

//     return 0;
// }


// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Maximum element: 30
//         Minimum element: 5

/*-------Example 2: std::sort with Custom Comparator --------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums  {10, 20, 5, 15, 30};
  

//     // Sort in descending order
//     std::sort(nums.begin(), nums.end(), [](int a, int b) {
//         return a > b; // Custom comparator
//     });

//     // Print sorted elements
//     std::cout << "Sorted in descending order: ";
//     for (int n : nums) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm

// Output: Sorted in descending order: 30 20 15 10 5


/*---- Example 3: std::unique to Remove Consecutive Duplicates----*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};

//     // Remove consecutive duplicates
//     auto it = std::unique(nums.begin(), nums.end());

//     // Resize vector to the new size
//     nums.erase(it, nums.end());

//     // Print the unique elements
//     std::cout << "After removing duplicates: ";
//     for (int n : nums) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: After removing duplicates: 1 2 3 4 5

/*-------Example 4: std::partition-----------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4, 5, 6};

//     // Partition even and odd numbers
//     auto partition_point = std::partition(nums.begin(), nums.end(), [](int n) {
//         return n % 2 == 0; // Even numbers first
//     });
    
//     // Sort the even numbers
//     std::sort(nums.begin(), partition_point);
    
//     // Sort the odd numbers
//     std::sort(partition_point, nums.end());

//     // Print partitioned elements
//     std::cout << "Partitioned (evens first): ";
//     for (int n : nums) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Partitioned (evens first): 2 4 6 1 3 5

/*---------------- Example 5: std::transform----------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4, 5};
//     std::vector<int> squared(nums.size());

//     // Square each element
//     std::transform(nums.begin(), nums.end(), squared.begin(), [](int n) {
//         return n * n;
//     });

//     // Print squared elements
//     std::cout << "Squared elements: ";
//     for (int n : squared) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Squared elements: 1 4 9 16 25

/*--------------Example 6: std::merge------------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> vec1 = {1, 3, 5, 7};
//     std::vector<int> vec2 = {2, 4, 6, 8};
//     std::vector<int> merged(vec1.size() + vec2.size());

//     // Merge two sorted ranges
//     std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), merged.begin());

//     // Print merged result
//     std::cout << "Merged: ";
//     for (int n : merged) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Merged: 1 2 3 4 5 6 7 8

/*--------------Example 7: std::binary_search-----------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 3, 5, 7, 9};

//     // Check if element exists
//     bool found = std::binary_search(nums.begin(), nums.end(), 5);
//     std::cout << "Element 5 found: " << (found ? "Yes" : "No") << "\n";

//     found = std::binary_search(nums.begin(), nums.end(), 4);
//     std::cout << "Element 4 found: " << (found ? "Yes" : "No") << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Element 5 found: Yes   
//         Element 4 found: No


/*------------------Example 8: std::remove_if---------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4, 5, 6};

//     // Remove all even numbers
//     auto it = std::remove_if(nums.begin(), nums.end(), [](int n) {
//         return n % 2 == 0; // Remove if even
//     });

//     // Erase the removed elements
//     nums.erase(it, nums.end());

//     // Print the result
//     std::cout << "After removing evens: ";
//     for (int n : nums) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: After removing evens: 1 3 5

/*-------------------Example 9: std::rotate-----------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4, 5};

//     // Rotate elements left
//     std::rotate(nums.begin(), nums.begin() + 2, nums.end());

//     // Print the result
//     std::cout << "After rotation: ";
//     for (int n : nums) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: After rotation: 3 4 5 1 2


/*--------------------Example 10: std::nth_element---------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {3, 1, 4, 1, 5, 9, 2};

//     // Partially sort to place the 3rd smallest element in position
//      std::nth_element(nums.begin(), nums.begin() + 2, nums.end());

//     // Print the result
//     std::cout << "After nth_element (3rd smallest): ";
//     for (int n : nums) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: After nth_element (3rd smallest): 1 1 2 3 4 5 9 

/*--------------------Example 11: std::set_union------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> set1 = {1, 3, 5, 7};
//     std::vector<int> set2 = {3, 5, 8, 9};
//     std::vector<int> result(set1.size() + set2.size());

//     // Perform set union
//     auto it = std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), result.begin());
//     result.resize(it - result.begin());

//     // Print union result
//     std::cout << "Union: ";
//     for (int n : result) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm

// Output: Union: 1 3 5 7 8 9

/*---------------------Example 12: std::find_if-------------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4, 5, 6};

//     // Find the first odd number
//     auto it = std::find_if(nums.begin(), nums.end(), [](int n) {
//         return n % 2 != 0; // Condition: odd
//     });

//     if (it != nums.end()) {
//         std::cout << "First odd number: " << *it << "\n";
//     } else {
//         std::cout << "No odd number found.\n";
//     }

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: First odd number: 1

/*------------------------Example 13: std::reverse------------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4, 5};

//     // Reverse the vector
//     std::reverse(nums.begin(), nums.end());

//     // Print reversed vector
//     std::cout << "Reversed: ";
//     for (int n : nums) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Reversed: 5 4 3 2 1

/*-----------------------Example 14: std::accumulate--------------------*/

// #include <algorithm>
// #include <vector>
// #include <numeric> // For std::accumulate
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4, 5};

//     // Calculate the sum of all elements
//     int sum = std::accumulate(nums.begin(), nums.end(), 0);

//     std::cout << "Sum of elements: " << sum << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Sum of elements: 15

/*--------------------------- Example 15: std::equal_range-----------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 3, 3, 4, 5};

//     // Find the range of value 3
//     auto range = std::equal_range(nums.begin(), nums.end(), 3);

//     std::cout << "Range of value 3: ";
//     for (auto it = range.first; it != range.second; ++it) {
//         std::cout << *it << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Range of value 3: 3 3 3

/*------------------------Example 16: std::inplace_merge-----------------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 3, 5, 2, 4, 6};

//     // Merge the two sorted halves in-place
//     std::inplace_merge(nums.begin(), nums.begin() + 3, nums.end());

//     // Print the result
//     std::cout << "After in-place merge: ";
//     for (int n : nums) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: After in-place merge: 1 2 3 4 5 6

/*---------------------------Example 17: std::inplace_merge----------------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 3, 5, 2, 4, 6};

//     // Merge the two sorted halves in-place
//     std::inplace_merge(nums.begin(), nums.begin() + 3, nums.end());

//     // Print the result
//     std::cout << "After in-place merge: ";
//     for (int n : nums) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: After in-place merge: 1 2 3 4 5 6

/*-------------------------------Example 18: std::minmax_element------------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {3, 1, 4, 1, 5, 9};

//     // Find the min and max elements
//     auto result = std::minmax_element(nums.begin(), nums.end());

//     std::cout << "Min element: " << *result.first << "\n";
//     std::cout << "Max element: " << *result.second << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Min element: 1
//         Max element: 9


/*---------------------------------Example 19: std::next_permutation---------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3};

//     // Generate and print all permutations
//     do {
//         for (int n : nums) {
//             std::cout << n << " ";
//         }
//         std::cout << "\n";
//     } while (std::next_permutation(nums.begin(), nums.end()));

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: 1 2 3
//         1 3 2
//         2 1 3
//         2 3 1
//         3 1 2
//         3 2 1



/*-------------------Example 20: std::adjacent_difference------------------------*/

// #include <numeric>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {10, 20, 30, 40, 50};
//     std::vector<int> differences(nums.size());

//     // Calculate adjacent differences
//     std::adjacent_difference(nums.begin(), nums.end(), differences.begin());

//     // Print the differences
//     std::cout << "Differences: ";
//     for (int d : differences) {
//         std::cout << d << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Differences: 10 10 10 10 10

/*-------------------------Example 21: std::includes----------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> set1 = {1, 2, 3, 4, 5};
//     std::vector<int> set2 = {2, 3, 5};

//     // Check if set1 includes set2
//     bool result = std::includes(set1.begin(), set1.end(), set2.begin(), set2.end());

//     std::cout << "Does set1 include set2? " << (result ? "Yes" : "No") << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Does set1 include set2? Yes

/*--------------------------Example 22: std::set_intersection----------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> set1 = {1, 2, 3, 4, 5};
//     std::vector<int> set2 = {3, 4, 5, 6, 7};
//     std::vector<int> result(std::min(set1.size(), set2.size()));

//     // Find the intersection
//     auto it = std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), result.begin());

//     // Resize the result vector to the actual size
//     result.resize(it - result.begin());

//     // Print the intersection
//     std::cout << "Intersection: ";
//     for (int n : result) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Intersection: 3 4 5

/*---------------------------Example 23: std::set_difference---------------------*/

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {

//     std::vector<int> set1 = {1, 2, 3, 4, 5};
//     std::vector<int> set2 = {3, 4, 5, 6, 7};
//     std::vector<int> result(std::max(set1.size(), set2.size()));

//     // Find the difference
//     auto it = std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), result.begin());

//     // Resize the result vector to the actual size

//     result.resize(it - result.begin());

//     // Print the difference
//     std::cout << "Difference: ";
//     for (int n : result) {
//         std::cout << n << " ";
//     }
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Difference: 1 2



/*---------------------------Non-modifying sequence operations---------------------*/


// ---std::all_of

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {2, 4, 6, 8};

//     // Check if all elements are even
//     bool result = std::all_of(nums.begin(), nums.end(), [](int n) { return n % 2 == 0; });

//     std::cout << "All elements are even? " << (result ? "Yes" : "No") << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: All elements are even? Yes

// ---std::any_of

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 3, 5, 8};

//     // Check if any element is even
//     bool result = std::any_of(nums.begin(), nums.end(), [](int n) { return n % 2 == 0; });

//     std::cout << "Any element is even? " << (result ? "Yes" : "No") << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Any element is even? Yes

// ---std::none_of

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 3, 5};

//     // Check if no element is even
//     bool result = std::none_of(nums.begin(), nums.end(), [](int n) { return n % 2 == 0; });

//     std::cout << "No element is even? " << (result ? "Yes" : "No") << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: No element is even? Yes

// ---std::for_each

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4};

//     // Print each element
//     std::for_each(nums.begin(), nums.end(), [](int n) { std::cout << n << " "; });
//     std::cout << "\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: 1 2 3 4

// ---std::find

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4, 5};

//     // Find the first occurrence of 3
//     auto it = std::find(nums.begin(), nums.end(), 3);
//     if (it != nums.end()) {
//         std::cout << "Found 3 at position: " << std::distance(nums.begin(), it) << "\n";
//     } else {
//         std::cout << "3 not found\n";
//     }

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: Found 3 at position: 2


// ---std::find_if

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4, 5};

//     // Find the first even number
//     auto it = std::find_if(nums.begin(), nums.end(), [](int n) { return n % 2 == 0; });
//     if (it != nums.end()) {
//         std::cout << "First even number is: " << *it << "\n";
//     } else {
//         std::cout << "No even numbers found\n";
//     }

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: First even number is: 2

// ---std::count

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 2, 3, 2, 4};

//     // Count how many times 2 appears
//     int count = std::count(nums.begin(), nums.end(), 2);
//     std::cout << "The number 2 appears " << count << " times\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: The number 2 appears 3 times

// ---std::count_if

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> nums = {1, 2, 3, 4, 5};

//     // Count how many numbers are even
//     int count = std::count_if(nums.begin(), nums.end(), [](int n) { return n % 2 == 0; });
//     std::cout << "There are " << count << " even numbers\n";

//     return 0;
// }

// run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: There are 2 even numbers

// ---std::mismatch

// #include <algorithm>
// #include <vector>
// #include <iostream>

// int main() {
//     std::vector<int> vec1 = {1, 2, 3, 4, 5};
//     std::vector<int> vec2 = {1, 2, 0, 4, 5};

//     // Find the first mismatch
//     auto result = std::mismatch(vec1.begin(), vec1.end(), vec2.begin());
//     if (result.first != vec1.end()) {
//         std::cout << "First mismatch at position: " << std::distance(vec1.begin(), result.first) << "\n";
//     } else {
//         std::cout << "No mismatch\n";
//     }

//     return 0;
// }

//run command : g++ -std=c++11 algorithm.cpp -o algorithm
// Output: First mismatch at position: 2 


/*

    ████████╗██╗  ██╗ █████╗ ███╗   ██╗██╗  ██╗    ██╗   ██╗ ██████╗ ██╗   ██╗
    ╚══██╔══╝██║  ██║██╔══██╗████╗  ██║██║  ██║    ██║   ██║██╔═══██╗██║   ██║
       ██║   ███████║███████║██╔██╗ ██║███████║    ██║   ██║██║   ██║██║   ██║
       ██║   ██╔══██║██╔══██║██║╚██╗██║██╔══██║    ╚██╗ ██╔╝██║   ██║██║   ██║
       ██║   ██║  ██║██║  ██║██║ ╚████║██║  ██║     ╚████╔╝ ╚██████╔╝╚██████╔╝
       ╚═╝   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝      ╚═══╝   ╚═════╝  ╚═════╝


    
    ██████╗ ██╗   ██╗███████╗███████╗ █████╗ ███╗   ██╗██╗   ██╗ ██████╗ ██╗   ██╗
    ██╔══██╗██║   ██║██╔════╝██╔════╝██╔══██╗████╗  ██║██║   ██║██╔═══██╗██║   ██║
    ██████╔╝██║   ██║███████╗███████╗███████║██╔██╗ ██║██║   ██║██║   ██║██║   ██║
    ██╔═══╝ ██║   ██║╚════██║╚════██║██╔══██║██║╚██╗██║██║   ██║██║   ██║██║   ██║
    ██║     ╚██████╔╝███████║███████║██║  ██║██║ ╚████║╚██████╔╝╚██████╔╝╚██████╔╝
    ╚═╝      ╚═════╝ ╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝  ╚═════╝  ╚═════╝ 
    

    
*/

  























