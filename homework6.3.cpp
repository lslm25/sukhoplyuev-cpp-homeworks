#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    
    std::cout << "Введите первую строку: ";
    std::getline(std::cin, str1);
    
    std::cout << "Введите вторую строку: ";
    std::getline(std::cin, str2);

    std::string result = str1 + str2;

    std::cout << "Результат: " << result << std::endl;
    
    return 0;
}
