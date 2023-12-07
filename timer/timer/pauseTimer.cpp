#include "pauseTimer.h";
#include <conio.h>
using namespace std;

void pauseTimer(bool& isPaused) {
    if (_kbhit()) {
        char key = _getch();
        if (key == ' ') {
            isPaused = !isPaused;
        }
    }
}