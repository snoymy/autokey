#include "autokey.h"

void atk::press(Key key)
{
    sendPressEvent((int)key);
}

void atk::release(Key key)
{
    sendReleaseEvent((int)key);
}

void atk::tap(Key key)
{
    sendPressEvent((int)key);
    sendReleaseEvent((int)key);
}

bool atk::isPressed(Key key)
{
    return getKeyEvent((int)key);
}

void atk::Delay(unsigned int ms)
{
    usleep(ms*1000);
}

