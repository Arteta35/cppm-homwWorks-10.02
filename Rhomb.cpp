#include "Rhomb.h"

Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {

	if (a != c || b != d || c != d || a != d) throw IncorrectFigure(12);

	if (A != C || B != D) throw IncorrectFigure(13);

	name = "Ромб";
}