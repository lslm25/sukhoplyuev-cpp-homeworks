#include <iostream>

int main() {
    const int ROWS = 2;    
    const int COLS = 3;    
    
    int arr[ROWS][COLS];   

    int counter = 1;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = counter;
            counter++;
        }
    }

    std::cout << "Элементы массива:" << std::endl;
    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;  
    }
    
    return 0;
}
