#include "_Rectangle.h"
#include "IncorrectFigure.h"

_Rectangle::_Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {

	if ((a != c) || (b != d)) throw IncorrectFigure(6);

	if (A != 90 || B != 90 || C != 90 || D != 90) throw IncorrectFigure(7);

	name = "Прямоугольник";
}