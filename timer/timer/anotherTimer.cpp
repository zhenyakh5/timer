#include <iostream>
#include <string>
using namespace std;

bool isNum(const string& str)
{
    for (char const& c : str) { // Проверка всех символов в str
        if (!isdigit(c))
            return false;
    }
    return true;
}

int anotherTimer() {
    string key;
    while (true) {
        cout << "Введите цифру (от 1 до 2): ";
        cin >> key;
        if (isNum(key)) {
            break;
        }
        else {
            cout << "Ошибка! Необходимо вводить только цифры. Попробуйте снова.\n";
        }
    }
    return stoi(key);
}