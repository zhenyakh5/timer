#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>  // Добавленная библиотека для _kbhit и _getch
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int durationInSeconds;

    cout << "Введите длительность таймера в секундах: ";
    cin >> durationInSeconds;

    int remainingTime = durationInSeconds;
    bool isPaused = false;

    while (remainingTime > 0) {
        system("cls");

        if (_kbhit()) {  // Проверка на нажатие клавиши
            char key = _getch();
            if (key == ' ') {
                isPaused = !isPaused;
            }
        }

        if (!isPaused) {
            int hours = remainingTime / 3600;
            int minutes = (remainingTime % 3600) / 60;
            int seconds = remainingTime % 60;

            cout << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << endl;

            Sleep(1000);

            remainingTime--;
        } 
        else {
            // Если на паузе, все равно покажем текущее время
            int hours = remainingTime / 3600;
            int minutes = (remainingTime % 3600) / 60;
            int seconds = remainingTime % 60;

            cout << "Таймер на паузе. Оставшееся время: " << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << endl;

            Sleep(1000);
        }
    }

    system("cls");
    cout << "Таймер завершен!" << endl;

    return 0;
}
