#include "stdafx.h"
#include "triangle.h"
#include <iostream> 
using namespace std;

int numberOfTriangles = 0;
int currentTriangle = 0;

void menu()
{
	cout << "Welcome to Triangle creator!  You have " << numberOfTriangles << " Triangles" << endl;
	cout << "Now you are working with " << currentTriangle << " Triangle" << endl;
	cout << "1. Create new Triangle" << endl;
	//creates new Triangle from an array
	cout << "2. Choose existing Triangle" << endl;
	//list of Triangles + their types
	cout << "3. Change Triangle coordinates" << endl;
	//change coordinates for current Triangle
	cout << "4. List of Triangles" << endl;
	//list of Triangles with info about types and their amount
	//+ maximum and minimum perimeter sizes for each type
	cout << "5. Exit" << endl;
}

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