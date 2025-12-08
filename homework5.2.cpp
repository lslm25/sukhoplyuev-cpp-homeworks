#include <iostream>

int main() {
    int score;

    std::cout << "Введите количество баллов: ";
    std::cin >> score;

    if (score < 0 || score > 100) {
        std::cout << "Ошибка: баллы должны быть в диапазоне от 0 до 100" << std::endl;
        return 1;
    }

    std::string grade;
    
    if (score < 40) {
        grade = "Неудовлетворительно";
    } else if (score < 60) {
        grade = "Удовлетворительно";
    } else if (score < 80) {
        grade = "Хорошо";
    } else {
        grade = "Отлично";
    }
    
    std::cout << "Оценка: " << grade << std::endl;
    
    return 0;
}
