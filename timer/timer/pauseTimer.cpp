#include "pauseTimer.h";
#include <conio.h>
using namespace std;

void pauseTimer(bool& isPaused) {
    if (_kbhit()) { // Проверяет, была ли нажата клавиша
        char key = _getch(); // Считывание символа без его вывода в консоль
        if (key == ' ') {
            isPaused = !isPaused;
        }
    }
}