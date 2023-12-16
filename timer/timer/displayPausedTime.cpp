#include "displayPausedTime.h"
#include <iostream>
#include <iomanip>
using namespace std;

void displayPausedTime(int remainingTime) {
    int hours = remainingTime / 3600;
    int minutes = (remainingTime % 3600) / 60;
    int seconds = remainingTime % 60;

    cout << "Таймер на паузе. Оставшееся время: " << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << ":" << setw(2) << setfill('0') << seconds << endl;
}