#include "Parallelogram.h"


Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {

	if (a != c || b != d) throw IncorrectFigure(10);

	if (A != C || B != D) throw IncorrectFigure(11);

	name = "ֿПараллелограм";
}