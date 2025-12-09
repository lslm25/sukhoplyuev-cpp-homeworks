#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    
    int minVal, maxVal;
    
    std::cout << "Введите минимальное значение: ";
    std::cin >> minVal;
    std::cout << "Введите максимальное значение: ";
    std::cin >> maxVal;

    if (minVal >= maxVal) {
        std::cout << "Ошибка: минимальное значение должно быть меньше максимального" << std::endl;
        return 1;
    }
    
    srand(time(0));

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % (maxVal - minVal + 1) + minVal;
    }

    std::cout << "Элементы массива:" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int maxElement = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    std::cout << "Максимальный элемент: " << maxElement << std::endl;
    
    return 0;
}
