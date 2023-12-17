#include <iostream>
#include <iomanip>
#include "displayPausedTime.h"
using namespace std;

void displayPausedTime(int remainingTime) {
    int hours = remainingTime / 3600;
    int minutes = (remainingTime % 3600) / 60;
    int seconds = remainingTime % 60;

    cout << setw(207) << setfill(' ') << "Пауза. Оставшееся время: " << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << endl;
}