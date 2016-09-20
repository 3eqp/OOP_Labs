#include "stdafx.h"
#include "triangle.h"
#include <iostream> 
using namespace std;

const int maxNumberOfTriangles = 20;
int numberOfTriangles = 0;
int currentTriangle = 0;
Triangle arrayOfTriangles[maxNumberOfTriangles];

void menu();

void switchTriangle() {
	system("cls");
	cout << "Choose one of Triangles    You have " << numberOfTriangles << " Triangles" << endl;
	for (int i = 0; i < numberOfTriangles; i++)
		cout << i + 1 << ". " 
}

void createTriangle() {
	numberOfTriangles++;
	currentTriangle = numberOfTriangles;
	arrayOfTriangles[currentTriangle].changeCoordinates();
	arrayOfTriangles[currentTriangle].print(currentTriangle);
	menu();
}

void menu()
{
	int chooseNumber = 0;

	system("cls");
	cout << "Welcome to Triangle creator!  You have " << numberOfTriangles << " Triangles" << endl;
	cout << "Now you are working with " << currentTriangle << " Triangle" << endl;
	cout << "1. Create new Triangle" << endl;
	cout << "2. Choose existing Triangle" << endl;
	//list of Triangles + their types
	cout << "3. Change Triangle coordinates" << endl;
	//change coordinates for current Triangle
	cout << "4. List of Triangles" << endl;
	//list of Triangles with info about types and their amount
	//+ maximum and minimum perimeter sizes for each type
	cout << "5. Exit" << endl;

	cin >> chooseNumber;
	switch (chooseNumber) {
	case 1: createTriangle(); break;
	case 2: switchTriangle(); break;
	case 3: arrayOfTriangles[currentTriangle].changeCoordinates(); break;
	//case 4: showTriangleList(); break;
	case 5: break;
	}
}

int _tmain(int argc, _TCHAR* argv[]) {
	menu();

	return 0;
}