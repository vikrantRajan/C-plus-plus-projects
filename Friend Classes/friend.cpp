#include "Headers/friend.h"

void A::setPrivateValue(B & obj, int value)
{
    obj.privateValue = value;
}