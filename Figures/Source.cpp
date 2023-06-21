#include<iostream>
#include<string>
#include "Triangle.h"
#include "Square.h"



int main()
{
	Triangle test_tr(1, 2, 4);
	cout << test_tr.ToString() << endl;
	cout << test_tr.getArea() << endl;
	Square test_sq(5, 10);
	cout << test_sq.ToString() << endl;
	cout << test_sq.getArea() << endl;
	system("pause");
	return 0;
}