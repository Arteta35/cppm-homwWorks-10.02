#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {


	if (a != c && A != C) throw IncorrectFigure(3);

	name = "Равнобедренный треугольник";

}