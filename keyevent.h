#ifdef OS_LINUX

    #include <X11/Xlib.h>
    #include <X11/keysym.h>
    #include <X11/extensions/XTest.h>

#endif // OS_LINUX

#ifdef OS_WINDOWS

    #include <windows.h>

#endif // OS_WINDOWS

#include "keymap.h"

void sendPressEvent(int);
void sendReleaseEvent(int);
bool getKeyEvent(int);

