#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int durationInSeconds;

    cout << "Введите длительность таймера в секундах: ";
    cin >> durationInSeconds;

    int remainingTime = durationInSeconds;

    while (remainingTime > 0) {
        system("cls");

        int hours = remainingTime / 3600;
        int minutes = (remainingTime % 3600) / 60;
        int seconds = remainingTime % 60;

        cout << hours << ":" << minutes << ":" << seconds << endl;

        Sleep(1000);

        remainingTime--;
    }

    system("cls");
    cout << "Таймер завершен!" << endl;

    return 0;
}