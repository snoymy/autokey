#include <unistd.h>
#include "keyevent.h"

namespace atk
{
    void press(Key);
    void release(Key);
    void tap(Key);
    bool isPressed(Key);
    void Delay(unsigned int);
}
