#include "stdafx.h"
#include "triangle.h"
#include <iostream> 
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {
	Triangle A(0, 0, 0, 0, 0, 0);
	cout << "Triangle A created." << endl;
	A.changeCoordinates();
	cout << "Triangle A:" << endl;
	A.print();
	
	Triangle B(0, 0, 0, 0, 0, 0);
	cout << "Triangle B created." << endl;
	B.changeCoordinates();
	cout << "Triangle B:" << endl;
	B.print();

	return 0;
}