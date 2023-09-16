#include "Quadrilateral.h"
#include "IncorrectFigure.h"


Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {

	sides_count = 4;
	if ((A + B + C + D) != 360) throw IncorrectFigure(5);

	this->a = a, this->b = b, this->c = c, this->d = d;
	this->A = A, this->B = B, this->C = C, this->D = D;
	name = "Четырехугольник";
}