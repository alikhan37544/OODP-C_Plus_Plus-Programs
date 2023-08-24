#include <iostream>

int main() {
    int num = 5;
    
    std::cout << "Initial value of num: " << num << std::endl;

    // Pre-increment
    int preIncrementResult = ++num;
    std::cout << "After pre-increment, num: " << num << ", Result: " << preIncrementResult << std::endl;

    // Reset num
    num = 5;

    // Post-increment
    int postIncrementResult = num++;
    std::cout << "After post-increment, num: " << num << ", Result: " << postIncrementResult << std::endl;

    // Reset num
    num = 5;

    // Pre-decrement
    int preDecrementResult = --num;
    std::cout << "After pre-decrement, num: " << num << ", Result: " << preDecrementResult << std::endl;

    // Reset num
    num = 5;

    // Post-decrement
    int postDecrementResult = num--;
    std::cout << "After post-decrement, num: " << num << ", Result: " << postDecrementResult << std::endl;

    return 0;
}
