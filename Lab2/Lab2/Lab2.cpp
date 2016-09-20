#include "stdafx.h"
#include "triangle.h"
#include <iostream> 
using namespace std;

const int maxNumberOfTriangles = 20;
int numberOfTriangles = 0;
int currentTriangle = 0;
Triangle arrayOfTriangles[maxNumberOfTriangles];

void menu();

void maxminCalculations() {

}

int typeDetailsCalculations(int typeNum, int typeArray[], int typeSize, int maxId, int minId) {
	int j = 0;
	for (int i = 0; i < maxNumberOfTriangles; i++)
		if (arrayOfTriangles[i].triangleType == typeNum) {
			typeArray[j] = i;
			typeSize++;
			j++;
		}
	return typeNum, typeSize;
}

void showTriangleList() {
	int typeArray_0[10], typeArray_1[10], typeArray_2[10], typeArray_3[10], typeArray_4[10];
	int typeSize0 = 0, typeSize1 = 0, typeSize2 = 0, typeSize3 = 0, typeSize4 = 0;

	system("cls");
	cout << "Равнобедренных: " << typeDetailsCalculations(4, typeArray_4[10], typeSize4, maxPerimeterId_4, minPerimeterId_4) << endl;
	//cout << "Max Perimeter: #" << maxPerimeterId_4 << " " << arrayOfTriangles[maxPerimetrId_4].perimeter << endl;
	cout << "Разносторонних: " << typeSize1 << endl;
	cout << "Равносторонних: " << typeSize2 << endl;
	cout << "Прямоугольных: " << typeSize3 << endl;
	system("pause");
	menu();
}

char* triangleTypeConverter(int triangleNumber) {
	char *triangleTypeName[26];
	switch (arrayOfTriangles[triangleNumber].triangleType) {
	case 0: *triangleTypeName = "Треугольник неправильно задан"; break;
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
	currentTriangle = numberOfTriangles - 1;
	arrayOfTriangles[currentTriangle].changeCoordinates();
	arrayOfTriangles[currentTriangle].print(currentTriangle);
	menu();
}

void menu()
{
	int chooseNumber = 0;

	do
	{
		system("cls");
		cout << "Welcome to Triangle creator!  You have " << numberOfTriangles << " Triangles" << endl;
		cout << "Now you are working with " << currentTriangle + 1 << " Triangle" << endl << endl;
		cout << "1. Create new Triangle" << endl;
		cout << "2. Choose existing Triangle" << endl;
		cout << "3. Change Triangle coordinates" << endl;
		cout << "4. List of Triangles" << endl;
		//list of Triangles with info about types and their amount
		//+ maximum and minimum perimeter sizes for each type
		cout << "5. Exit" << endl;

		cin >> chooseNumber;
		switch (chooseNumber) {
		case 1: createTriangle(); break;
		case 2: switchTriangle(); break;
		case 3: arrayOfTriangles[currentTriangle].changeCoordinates(); chooseNumber = 0; break;
		case 4: showTriangleList(); break;
		case 5: break;
		default: chooseNumber = 0; break;
		}
	} while (chooseNumber == 0);
}

int _tmain(int argc, _TCHAR* argv[]) {
	setlocale(LC_ALL, "rus");
	menu();
	return 0;
}