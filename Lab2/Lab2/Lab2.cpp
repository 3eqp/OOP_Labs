#include "stdafx.h"
#include "triangle.h"
#include <iostream> 
using namespace std;

const int maxNumberOfTriangles = 20;
int numberOfTriangles = 0;
int currentTriangle = 0;
Triangle arrayOfTriangles[maxNumberOfTriangles];

void menu();

char* triangleTypeConverter(int triangleNumber) {
	char *triangleTypeName[26];
	switch (arrayOfTriangles[triangleNumber].triangleType) {
	case 0: *triangleTypeName = "Треугольник не существует"; break;
	case 1: *triangleTypeName = "Разносторонний"; break;
	case 2: *triangleTypeName = "Равносторонний"; break;
	case 3: *triangleTypeName = "Прямоугольный"; break;
	case 4: *triangleTypeName = "Равнобедренный"; break;
	};
	return *triangleTypeName;
}

void switchTriangle() {
	int num = 0;
	system("cls");
	cout << " You have " << numberOfTriangles << " Triangles" << endl;
	cout << "0. Exit" << endl;
	for (int i = 0; i < numberOfTriangles; i++)
		cout << i + 1 << ". " << triangleTypeConverter(i) << endl;
	cin >> num;
	if (num != 0)
		currentTriangle = num - 1;
	menu();
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
	cout << "Now you are working with " << currentTriangle << " Triangle" << endl << endl;
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
	setlocale(LC_ALL, "rus");
	menu();
	return 0;
}