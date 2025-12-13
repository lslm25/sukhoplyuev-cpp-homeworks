#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double score;

public:

    Student() {
        name = "";
        age = 0;
        score = 0.0;
    }
    Student(string n, int a, double s) {
        name = n;
        age = a;
        score = s;
    }
    void setName(const string& n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setScore(double s) {
        score = s;
    }
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    double getScore() const {
        return score;
    }
    bool isAdult() const {
        return age >= 18;
    }
    void show() const {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
        cout << "Средний балл: " << score << endl;
        cout << "Совершеннолетний: " << (isAdult() ? "да" : "нет") << endl;
    }
};

int main() {
    Student st("Иван", 19, 4.2);
    st.show();
    return 0;
}
