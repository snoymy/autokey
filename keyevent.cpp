#include "keyevent.h"

#ifdef OS_LINUX

void sendPressEvent(int key)
{
    Display *display;
    KeyCode keycode;
    display = XOpenDisplay(NULL);

    keycode = XKeysymToKeycode(display, key);
    XTestFakeKeyEvent(display, keycode, True, 0);
    XFlush(display);
    XCloseDisplay(display);
}

void sendReleaseEvent(int key)
{
    Display *display;
    KeyCode keycode;
    display = XOpenDisplay(NULL);

    keycode = XKeysymToKeycode(display, key);
    XTestFakeKeyEvent(display, keycode, False, 0);
    XFlush(display);
    XCloseDisplay(display);
}

bool getKeyEvent(int key)
{
    Display *display;
    KeyCode keycode;
    char keys_return[32];
    display = XOpenDisplay(NULL);

    XQueryKeymap(display, keys_return);
    keycode = XKeysymToKeycode(display, key);
    bool isPressed = (keys_return[keycode >> 3] & (1 << (keycode & 7)));
    XCloseDisplay(display);

    return isPressed;
}

#endif // OS_LINUX

#ifdef OS_WINDOWS

int key_combine = 0;

void sendPressEvent(int key)
{
    int PRESSMODE = 0;
    if(key_combine)
    {
        PRESSMODE = KEYEVENTF_EXTENDEDKEY;
    }

    keybd_event(key,0,PRESSMODE,0);

    key_combine++;
}

void sendReleaseEvent(int key)
{
    if(key_combine > 0)
    {
        key_combine--;
    }

    keybd_event(key,0,KEYEVENTF_KEYUP,0);
}

bool getKeyEvent(int key)
{
    return GetAsyncKeyState(key);
}

#endif // OS_WINDOWS
