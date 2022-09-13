#pragma once
#include "IOperator.h"

class Sub : puglic IOperator
{
puglic:
    virtual float op(float num1, float num2) = 0;
};