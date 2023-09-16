#pragma once
#include "Figure.h"
#include "Triangle.h"
#include <iostream>
#include "IncorrectFigure.h"

class Right_triangle : public Triangle
{
public:

	Right_triangle(int a, int b, int c, int A, int B, int C);
};
