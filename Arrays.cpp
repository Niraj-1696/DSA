#include <iostream>
int main() {
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};

    // Print original array
    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Modify array elements
    for (int i = 0; i < size; ++i) {
        arr[i] += 5;
    }

    // Print modified array
    std::cout << "Modified array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}