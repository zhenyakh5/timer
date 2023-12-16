#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool isNumber(const string& str)
{
    for (char const& ch : str) { // Проверка всех символов в str
        if (!isdigit(ch))
            return false;
    }
    return true;
}

int getRemainingTime() {
    string hours, minutes, seconds;
    while (true) {
        cout << "Введите количество часов: ";
        cin >> hours;
        if (isNumber(hours)) {
            break;
        }
        else {
            system("cls");
            cout << "Ошибка! Необходимо вводить только цифры.\nПопробуйте снова.\n";
        }
    }
    while (true) {
        cout << "Введите количество минут: ";
        cin >> minutes;
        if (isNumber(minutes)) {
            break;
        }
        else {
            system("cls");
            cout << "Введите количество часов: " << hours << endl;
            cout << "Ошибка! Необходимо вводить только цифры.\nПопробуйте снова.\n";
        }
    }
    while (true) {
        cout << "Введите количество секунд: ";
        cin >> seconds;
        if (isNumber(seconds)) {
            break;
        }
        else {
            system("cls");
            cout << "Введите количество часов: " << hours << endl;
            cout << "Введите количество минут: " << minutes << endl;
            cout << "Ошибка! Необходимо вводить только цифры.\nПопробуйте снова.\n";
        }
    }

    return stoi(hours) * 3600 + stoi(minutes) * 60 + stoi(seconds);
}