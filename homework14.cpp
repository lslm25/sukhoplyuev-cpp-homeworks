#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Введите количество строк: ";
    cin >> n;
    vector<string> words(n);
    cout << "Введите строки:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    vector<bool> result(n);
    bool current = true; 
    for (int i = 0; i < n; i++) {
        result[i] = current;
        if (words[i] == "flick") {
            current = !current;
        }
    }
    cout << "Результат: ";
    for (bool val : result) {
        cout << (val ? "true" : "false") << " ";
    }
    cout << endl;
    return 0;
}
