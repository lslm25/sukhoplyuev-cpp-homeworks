#include <iostream>

void changeSigns(int &a, int &b) {
    a = -a; 
    b = -b;  
}

int main() {
    int num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Исходные числа: " << num1 << " " << num2 << std::endl;

    changeSigns(num1, num2);

    std::cout << "После изменения знаков: " << num1 << " " << num2 << std::endl;
    
    return 0;
}
