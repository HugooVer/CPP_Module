#include <iostream>
#include "Array.hpp"

int main() {
    // Test default constructor
    Array<int> arr1;
    std::cout << "arr1 size: " << arr1.size() << std::endl; // Expected output: 0

    // Test constructor with size
    Array<int> arr2(5);
    std::cout << "arr2 size: " << arr2.size() << std::endl; // Expected output: 5

    // Test element assignment and access
    for (unsigned int i = 0; i < arr2.size(); ++i) {
        arr2[i] = i * 11;
    }
    for (unsigned int i = 0; i < arr2.size(); ++i) {
        std::cout << "arr2[" << i << "]: " << arr2[i] << std::endl; // Expected output: 0, 10, 20, 30, 40
    }

    // Test copy constructor
    Array<int> arr3(arr2);
    std::cout << "arr3 (copy of arr2) size: " << arr3.size() << std::endl; // Expected output: 5
    for (unsigned int i = 0; i < arr3.size(); ++i) {
        std::cout << "arr3[" << i << "]: " << arr3[i] << std::endl; // Expected output: 0, 10, 20, 30, 40
    }

    // Test assignment operator
    Array<int> arr4 = arr3;
    std::cout << "arr4 (assigned from arr3) size: " << arr4.size() << std::endl; // Expected output: 5
    for (unsigned int i = 0; i < arr4.size(); ++i) {
        std::cout << "arr4[" << i << "]: " << arr4[i] << std::endl; // Expected output: 0, 10, 20, 30, 40
    }

    // Test bounds checking (should throw an exception)
    try {
        std::cout << "arr2[10]: " << arr2[10] << std::endl; // Out of bounds, should throw an exception
    } catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl; // Expected output: Exception caught: Array index out of bounds
    }

    return 0;
}