#include<iostream>
#include<string>
#include "Triangle.h"
#include "Square.h"
#include "Figures.h"
#include "CalcFigures.h"

int main()
{
	Triangle test_tr1(3, 3, 3);
	Triangle test_tr2(2, 2, 2);
	Square test_sq1(1, 1);
	Square test_sq2(2, 2);
	Figures test1;
	Figures test2(test_tr1);
	Figures test3(test_sq1);
	Figures test4(test_sq2, test_tr2);
	Figures test5(test4);
	test4.AddFigure(test_sq1, test_tr1);
	/*test4.PrintSquares();
	test4.PrintTriangles();*/
	CalcFigures a;
	a.ShowPerimeter(test4);
	a.ShowArea(test4);
	a.ShowFiguresCMD(test4);
	system("pause");
	return 0;
}