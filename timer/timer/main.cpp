#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include "displayTime.h"
#include "displayPausedTime.h"
#include "getRemainingTime.h"
#include "pauseTimer.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int remainingTime = getRemainingTime();
    bool isPaused = false;

    while (remainingTime > 0) {
        pauseTimer(isPaused);

        if (!isPaused) {
            system("cls");
            displayTime(remainingTime);
            Sleep(1000);
            remainingTime--;
        }
        else {
            system("cls");
            displayPausedTime(remainingTime);
            Sleep(1000);
        }
    }

    system("cls");

    for (int i = 0; i < 2; i++) {
        Beep(800, 300);
        Beep(800, 300);
        Beep(800, 300);
        Beep(800, 300);
        Sleep(2000);
    }

    cout << "Таймер завершен!" << endl;

    return 0;
}