#pragma once
#include<iostream>
#include<string>
#include "Triangle.h"
#include "Square.h"
using namespace std;

class Figures
{
public:
	Figures();//constructor default
	Figures(Square square);//constructor with parametrs
	Figures(Triangle triangle);//constructor with parametrs
	Figures(Square square, Triangle triangle);//constructor with parametrs
	~Figures();//distructor
	Figures(const Figures& initial);//copy constructor
	void operator=(const Figures& initial);//copy operator
	void AddFigure(Square square);
	void AddFigure(Triangle triangle);
	void AddFigure(Square square, Triangle triangle);
	void PrintSquares();
	void PrintTriangles();
	//Setters
	void setFigure(Square square, int index);
	void setFigure(Triangle triangle, int index);
	//Getters
	Square getFigure_square(int index);
	Triangle getFigure_triangle(int index);

private:
	int _sizeS;
	int _sizeT;
	Square* _squares;
	Triangle* _triangles;
};

