#include <conio.h>
#include "pauseTimer.h"
using namespace std;

void pauseTimer(bool& isPaused) {
    if (_kbhit()) {
        char key = _getch();
        if (key == 32) {
            isPaused = !isPaused;
        }
    }
}