#include <iostream>

int main() {
    char symbol;
    std::cout << "Введите символ: ";
    std::cin >> symbol;
    std::cout << "Символ: " << symbol << std::endl;
    std::cout << "Код: " << static_cast<int>(symbol) << std::endl;
    int nextCode = static_cast<int>(symbol) + 1;
    std::cout << "Код следующего символа: " << nextCode << std::endl;
    char nextSymbol = static_cast<char>(nextCode);
    std::cout << "Следующий символ: " << nextSymbol << std::endl;
    
    return 0;
}
