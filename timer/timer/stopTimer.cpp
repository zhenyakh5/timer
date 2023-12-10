#include "stopTimer.h"
#include <conio.h>
using namespace std;

void stopTimer(bool& isStopped) {
    if (_kbhit()) { // Проверяет, была ли нажата клавиша
        char key = _getch(); // Считывание символа без его вывода в консоль
        if (key == 13) {
            isStopped = !isStopped;
        }
    }
}