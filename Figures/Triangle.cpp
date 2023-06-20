#include "Triangle.h"

Triangle::Triangle()
{
	_a = 0;
	_b = 0;
	_c = 0;
}

Triangle::Triangle(int a, int b, int c)
{
	_a = a;
	_b = b;
	_c = c;
}

string Triangle::ToString(){return "A="+to_string(_a)+" B=" + to_string(_b)+" C="+to_string(_c);}

int Triangle::getA(){return _a;}

int Triangle::getB(){return _b;}

int Triangle::getC(){return _c;}

void Triangle::setA(int a) { _a = a; }

void Triangle::setB(int b) { _b = b; }

void Triangle::setC(int c) { _c = c; }
