#pragma once
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class Triangle
{
public:
	Triangle();//constructol default
	Triangle(int a, int b, int c);//constructor with params
	string ToString();
	//Getters
	int getA();
	int getB();
	int getC();
	int getPerimetr();
	double getArea();
	//Setters
	void setA(int a);
	void setB(int b);
	void setC(int c);

private:
	int _a, _b, _c;
};

