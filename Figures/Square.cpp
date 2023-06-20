#include "Square.h"

Square::Square()
{
	_a = 0;
	_b = 0;
}

Square::Square(int a, int b)
{
	_a = a;
	_b = b;
}

string Square::ToString(){ return "A=" + to_string(_a) + " B=" + to_string(_b);}

int Square::getA() { return _a; }

int Square::getB() { return _b; }

void Square::setA(int a) { _a = a; }

void Square::setB(int b) { _b = b; }

