#include <iostream>

int main() {
    int n, originalNum, reversedNum = 0, remainder;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    originalNum = n;

    // Reverse the digits of the number
    while (n > 0) {
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }

    // Check if the original number and reversed number are equal
    if (originalNum == reversedNum) {
        std::cout << originalNum << " is a palindrome." << std::endl;
    } else {
        std::cout << originalNum << " is not a palindrome." << std::endl;
    }

    return 0;
}
