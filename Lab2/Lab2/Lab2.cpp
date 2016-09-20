#include "stdafx.h"
#include "triangle.h"
#include <iostream> 
using namespace std;

const int maxNumberOfTriangles = 20;
int numberOfTriangles = 0;
int currentTriangle = 0;
Triangle arrayOfTriangles[maxNumberOfTriangles];

void menu();

void maxminCalculations(int typeNum, int *maxId, int *minId) {
	int max = 0, min = 99999;
	for (int i = 0; i < numberOfTriangles; i++)
		if (arrayOfTriangles[i].perimeter > max && arrayOfTriangles[i].triangleType == typeNum) {
			max = arrayOfTriangles[i].perimeter;
			*maxId = i;
		}
	for (int i = 0; i < numberOfTriangles; i++)
		if (arrayOfTriangles[i].perimeter < min && arrayOfTriangles[i].triangleType == typeNum) {
			min = arrayOfTriangles[i].perimeter;
			*minId = i;
		}
}

void typeDetailsCalculations(int typeNum, int *typeSize, int *maxId, int *minId) {
	for (int i = 0; i < numberOfTriangles; i++)
		if (arrayOfTriangles[i].triangleType == typeNum) {
			*typeSize += 1;
		}
	maxminCalculations(typeNum, &*maxId, &*minId);
}

void maxminPrint(int typeNum, int maxId, int minId) {
	if (typeNum == arrayOfTriangles[maxId].triangleType && typeNum == arrayOfTriangles[minId].triangleType) {
		cout << "Max Perimeter: #" << maxId + 1 << " " << arrayOfTriangles[maxId].perimeter << endl;
		cout << "Min Perimeter: #" << minId + 1<< " " << arrayOfTriangles[minId].perimeter << endl;
	}
	cout << endl;
}

void showTriangleList() {
	int typeSize_1 = 0, typeSize_2 = 0, typeSize_3 = 0, typeSize_4 = 0;
	int maxPerimeterId_1 = 0, maxPerimeterId_2 = 0, maxPerimeterId_3 = 0, maxPerimeterId_4 = 0;
	int minPerimeterId_1 = 0, minPerimeterId_2 = 0, minPerimeterId_3 = 0, minPerimeterId_4 = 0;

	system("cls");
	typeDetailsCalculations(1, &typeSize_1, &maxPerimeterId_1, &minPerimeterId_1);
	typeDetailsCalculations(2, &typeSize_2, &maxPerimeterId_2, &minPerimeterId_2);
	typeDetailsCalculations(3, &typeSize_3, &maxPerimeterId_3, &minPerimeterId_3);
	typeDetailsCalculations(4, &typeSize_4, &maxPerimeterId_4, &minPerimeterId_4);

	cout << "Разносторонних: " << typeSize_1 << endl;
	maxminPrint(1, maxPerimeterId_1, minPerimeterId_1);
	cout << "Равносторонних: " << typeSize_2 << endl;
	maxminPrint(2, maxPerimeterId_2, minPerimeterId_2);
	cout << "Прямоугольных: " << typeSize_3 << endl;
	maxminPrint(3, maxPerimeterId_3, minPerimeterId_3);
	cout << "Равнобедренных: " << typeSize_4 << endl;
	maxminPrint(4, maxPerimeterId_4, minPerimeterId_4);

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
		cout << i + 1 << ". " << triangleTypeConverter(i) << "	Perimeter = " << arrayOfTriangles[i].perimeter << endl;
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