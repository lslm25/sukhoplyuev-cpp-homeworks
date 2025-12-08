#include <iostream>

int main() {
    int N;
    
    std::cout << "Введите N: ";
    std::cin >> N;
    
    if (N < 1) {
        std::cout << "Ошибка: N должно быть больше или равно 1" << std::endl;
        return 1;
    }
    
    std::cout << "Чётные числа от 1 до " << N << ":" << std::endl;
    
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {  // Проверка на четность
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    
    return 0;
}
