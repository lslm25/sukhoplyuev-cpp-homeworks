#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;
    int* nums = new int[n];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cout << "Введите target: ";
    cin >> target;
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Индексы: " << i << ", " << j << endl;
                found = true;
                break;
            }
        }
        if (found) break;
    }
    if (!found) {
        cout << "Подходящей пары нет." << endl;
    }
    delete[] nums;
    return 0;
}
