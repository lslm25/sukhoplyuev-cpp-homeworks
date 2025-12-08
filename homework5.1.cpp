#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    
    int bitwiseAND = num1 & num2;  // Побитовое И
    int bitwiseOR = num1 | num2;   // Побитовое ИЛИ
    int bitwiseXOR = num1 ^ num2;  // Исключающее ИЛИ
    
    std::cout << "Результат побитового AND: " << bitwiseAND << std::endl;
    std::cout << "Результат побитового OR: " << bitwiseOR << std::endl;
    std::cout << "Результат побитового XOR: " << bitwiseXOR << std::endl;
    std::cout << "\nДополнительно (в двоичной системе):" << std::endl;
    std::cout << num1 << " в двоичной: ";
    for (int i = 31; i >= 0; i--) {
        std::cout << ((num1 >> i) & 1);
    }
    std::cout << std::endl;
    
    std::cout << num2 << " в двоичной: ";
    for (int i = 31; i >= 0; i--) {
        std::cout << ((num2 >> i) & 1);
    }
    std::cout << std::endl;
    
    std::cout << "AND результат: ";
    for (int i = 31; i >= 0; i--) {
        std::cout << ((bitwiseAND >> i) & 1);
    }
    std::cout << std::endl;
    
    return 0;
}
