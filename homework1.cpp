#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Bведите ваше имя: ";
    std::getline(std::cin, name);
    std::cout << "Привет, " << name << "! Добро пожаловать в программу!" << std::endl;   
    return 0;
}
