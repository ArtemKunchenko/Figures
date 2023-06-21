#include "CalcFigures.h"

void CalcFigures::ShowArea(Figures f)
{
	double area_squares = 0;
	double area_triangles = 0;
	if (f.getSize_S() != 0)
	{
		for (int i = 0; i < f.getSize_S(); i++)
		{
			cout << "Area (square " << i + 1 << ") = " << f.getFigure_square(i).getArea() << endl;
			area_squares += f.getFigure_square(i).getArea();
		}
		cout << "\nArea of all squares in array = " << area_squares << "\n\n";
	}
	if (f.getSize_T() != 0)
	{
		for (int i = 0; i < f.getSize_T(); i++)
		{
			cout << "Area (triangle " << i + 1 << ") = " << f.getFigure_triangle(i).getArea() << endl;
			area_triangles += f.getFigure_triangle(i).getArea();
		}
		cout << "\nArea of all triangles in array = " << area_triangles << "\n\n";
	}
	cout << "\nArea of all figures = " << area_squares + area_triangles << "\n\n";
}

void CalcFigures::ShowPerimeter(Figures f)
{
	double perimetr_squares = 0;
	double perimetr_triangles = 0;
	if (f.getSize_S() != 0)
	{
		for (int i = 0; i < f.getSize_S(); i++)
		{
			cout << "Perimetr (square " << i + 1 << ") = " << f.getFigure_square(i).getPerimetr() << endl;
			perimetr_squares += f.getFigure_square(i).getPerimetr();
		}
		cout << "\nPerimeter of all squares in array = "<< perimetr_squares<<"\n\n";
	}
	if (f.getSize_T() != 0)
	{
		for (int i = 0; i < f.getSize_T(); i++)
		{
			cout << "Perimetr (triangle " << i + 1 << ") = " << f.getFigure_triangle(i).getPerimetr() << endl;
			perimetr_triangles += f.getFigure_triangle(i).getPerimetr();
		}
		cout << "\nPerimeter of all triangles in array = " << perimetr_triangles << "\n\n";
	}
	cout << "\nPerimeter of all figures = " << perimetr_squares+ perimetr_triangles << "\n\n";
}

void CalcFigures::ShowFiguresCMD(Figures f)
{
	cout << "\t\t\tSQUARES\n";
	f.PrintSquares();
	cout << "\t\t\tTRIANGLES\n";
	f.PrintTriangles();
}
