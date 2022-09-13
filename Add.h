#pragma once
#include "IOperator.h"

class Add : puglic IOperator
{
puglic:
    virtual float op(float num1, float num2) = 0;
};