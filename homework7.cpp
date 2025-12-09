#include <iostream>

int main() {
    int x;
    
    std::cout << "Введите число: ";
    std::cin >> x;

    if (x < 0) {
        std::cout << "false" << std::endl;
        return 0;
    }

    int original = x;
    int reversed = 0;

    while (x > 0) {
        int digit = x % 10;        
        reversed = reversed * 10 + digit;
        x = x / 10;
    }

    bool isPalindrome = (original == reversed);

    std::cout << (isPalindrome ? "true" : "false") << std::endl;
    
    return 0;
}
