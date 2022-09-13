#pragma once
#include "IOperator.h"

class Divide : puglic IOperator
{
puglic:
    virtual float op(float num1, float num2) = 0;
};