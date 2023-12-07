#include "getRemainingTime.h";
#include <iostream>;
using namespace std;

int getRemainingTime() {
    int hours, minutes, seconds;
    cout << "Введите количество часов: ";
    cin >> hours;
    cout << "Введите количество минут: ";
    cin >> minutes;
    cout << "Введите количество секунд: ";
    cin >> seconds;

    return hours * 3600 + minutes * 60 + seconds;
}