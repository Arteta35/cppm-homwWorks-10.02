#include "Right_triangle.h"
#include "IncorrectFigure.h"

Right_triangle::Right_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {

	if (C != 90)throw IncorrectFigure(2);

	name = "Прямоугольный треугольник";
}