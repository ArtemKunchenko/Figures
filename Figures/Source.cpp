#include<iostream>
#include<string>
#include "Triangle.h"
#include "Square.h"



int main()
{
	Triangle test_tr(6, 6, 6);
	cout << test_tr.ToString() << endl;
	Square test_sq(5, 10);
	cout << test_sq.ToString() << endl;
	system("pause");
	return 0;
}