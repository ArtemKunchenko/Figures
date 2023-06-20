#pragma once
#include<iostream>
#include<string>
using namespace std;

class Square
{
public:
	Square();//constructol default
	Square(int a, int b);//constructor with params
	string ToString();
	//Getters
	int getA();
	int getB();
	//Setters
	void setA(int a);
	void setB(int b);

private:
	int _a, _b;
};

