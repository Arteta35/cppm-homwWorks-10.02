#include "Square.h"
#include "IncorrectFigure.h"


Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {

	if (a != c || a != b || a != c) throw IncorrectFigure(8);

	if (A != 90 || B != 90 || C != 90 || D != 90) throw IncorrectFigure(9);

	name = " вадрат";

}