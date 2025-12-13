#include <iostream>
#include <string>
using namespace std;

int value(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}
int romanToInt(const string& s) {
    int total = 0;
    for (int i = 0; i < s.length(); i++) {
        int curr = value(s[i]);
        int next = (i + 1 < s.length()) ? value(s[i + 1]) : 0;
        if (next > curr) {
            total -= curr;
        } else {
            total += curr;
        }
    }
    return total;
}

int main() {
    string s;
    cout << "Введите римское число: ";
    cin >> s;
    int result = romanToInt(s);
    cout << "Десятичное значение: " << result << endl;
    return 0;
}
