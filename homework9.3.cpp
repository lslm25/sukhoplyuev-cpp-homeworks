#include <iostream>

void countdown(int n) {
    if (n <= 0) {
        return;
    }

    std::cout << n << " ";

    countdown(n - 1);
}

int main() {
    int n;
    
    std::cout << "Введите число: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Число должно быть больше 0" << std::endl;
        return 1;
    }

    countdown(n);
    std::cout << std::endl;  // перевод строки после вывода всех чисел
    
    return 0;
}
