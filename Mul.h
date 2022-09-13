#pragma once
#include "IOperator.h"

class Mul : puglic IOperator
{
puglic:
    virtual float op(float num1, float num2) = 0;
};