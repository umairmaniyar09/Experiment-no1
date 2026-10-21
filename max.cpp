#include <iostream>

int main() {
    int numbers[] = {12, 45, 7, 89, 23, 56};
    int maxVal = numbers[0];
    
    // Traditional for loop (compatible with all C++ versions)
    for (int i = 0; i < 6; i++) {
        if (numbers[i] > maxVal) {
            maxVal = numbers[i];
        }
    }
    
    std::cout << "The maximum number is: " << maxVal << std::endl;
    
    return 0;
}
