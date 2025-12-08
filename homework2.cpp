#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Сумма: " << num1 + num2 << std::endl;
    std::cout << "Разность: " << num1 - num2 << std::endl;
    std::cout << "Произведение: " << num1 * num2 << std::endl;
    
    if (num2 != 0) {
        std::cout << "Частное: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Частное: деление на ноль невозможно" << std::endl;
    }
    
    return 0;
}
