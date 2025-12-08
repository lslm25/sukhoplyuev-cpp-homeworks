#include <iostream>
using namespace std;

int main() {
    const double USD_RATE = 85.0;   // 1 доллар = 85 рублей
    const double EUR_RATE = 100.0;  // 1 евро = 100 рублей
    double rubles;
    std::cout << "Введите сумму в рублях: ";
    std::cin >> rubles;

    if (rubles < 0) {
        std::cout << "Ошибка: сумма не может быть отрицательной!" << std::endl;
        return 1;
    }
   
    double dollars = rubles / USD_RATE;
    double euros = rubles / EUR_RATE;
    std::cout << "В долларах: " << dollars << std::endl;
    std::cout << "В евро: " << euros << std::endl;
    
    return 0;
}
