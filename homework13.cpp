#include <iostream>
#include <string>
using namespace std;

bool isValid(string s) {
    bool changed = true;
    while (changed) {
        changed = false;
        size_t pos;
        pos = s.find("()");
        if (pos != string::npos) {
            s.erase(pos, 2);
            changed = true;
        }
        pos = s.find("[]");
        if (pos != string::npos) {
            s.erase(pos, 2);
            changed = true;
        }
        pos = s.find("{}");
        if (pos != string::npos) {
            s.erase(pos, 2);
            changed = true;
        }
    }
    return s.empty();
}

int main() {
    string s;
    cout << "Введите строку со скобками: ";
    cin >> s;

    if (isValid(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
