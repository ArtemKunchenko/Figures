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

string Triangle::ToString(){return "A="+to_string(_a)+" B=" + to_string(_b)+" C="+to_string(_c)+"\n"; }

int Triangle::getA(){return _a;}

int Triangle::getB(){return _b;}

int Triangle::getC(){return _c;}

int Triangle::getPerimetr()
{
	if (_a <= 0 || _b <= 0 || _c <= 0|| (_a > (_b + _c)) || (_b > (_a + _c)) || (_c > (_a + _b)))
	{
		cout << "Figure with current parameters can't exist ";
		return NULL;
	}
	else return _a+_b+_c;
}

double Triangle::getArea()
{
	if (_a <= 0 || _b <= 0 || _c <= 0 || (_a > (_b + _c)) || (_b > (_a + _c)) || (_c > (_a + _b)))
	{
		cout << "Figure with current parameters can't exist ";
		return NULL;
	}
	else
	{
		double half_p = getPerimetr() / 2;
		double area = sqrt(half_p * (half_p - _a) * (half_p - _b) * (half_p - _c));
		return area;
	}
}

void Triangle::setA(int a) { _a = a; }

void Triangle::setB(int b) { _b = b; }

void Triangle::setC(int c) { _c = c; }
