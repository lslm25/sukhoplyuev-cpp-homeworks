#include <iostream>
#include <string>

int main() {
    std::string name;
    
    // Запрос имени у пользователя
    std::cout << "Bведите ваше имя: ";
    std::getline(std::cin, name);
    
    // Вывод персонализированного приветствия
    std::cout << "Привет, " << name << "! Добро пожаловать в программу!" << std::endl;
    
    return 0;
}
