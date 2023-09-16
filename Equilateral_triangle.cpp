#include "Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {

	if (a != b && b != c && A != 60 && B != 60 && C != 60) throw IncorrectFigure(4);

	name = "Равносторонний треугольник";
}