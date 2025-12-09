#include <iostream>

int minValue(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    
    std::cout << "Введите два числа: ";
    std::cin >> num1 >> num2;

    int minimum = minValue(num1, num2);

    std::cout << "Минимум: " << minimum << std::endl;
    
    return 0;
}
