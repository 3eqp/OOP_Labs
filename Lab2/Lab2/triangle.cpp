#include "stdafx.h"
#include "triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle() {
}

Triangle::Triangle(float X1, float Y1, float X2, float Y2, float X3, float Y3) {
	x1 = X1;
	x2 = X2;
	x3 = X3;
	y1 = Y1;
	y2 = Y2;
	y3 = Y3;
}

void Triangle::changeCoordinates() {
	cout << "Enter A(x,y)" << endl;
	cin >> x1 >> y1;
	cout << "Enter B(x,y)" << endl;
	cin >> x2 >> y2;
	cout << "Enter C(x,y)" << endl;
	cin >> x3 >> y3;
	calculations();
}

Triangle::~Triangle(void) {
}

void Triangle::print(int currentTriangle) {
	cout << "Triangle #" << currentTriangle << endl;
	cout << "A = (" << x1 << ";" << y1 << ")" << endl;
	cout << "B = (" << x2 << ";" << y2 << ")" << endl;
	cout << "C = (" << x3 << ";" << y3 << ")" << endl;
	cout << "Side a = " << sideLong_a << endl;
	cout << "Side b = " << sideLong_b << endl;
	cout << "Side c = " << sideLong_c << endl;
	cout << "Perimeter = " << perimeter << endl;
	cout << "Triangle type: " << printTriangleType() << endl;
	system("pause");
}

float Triangle::sideLong(float X1, float Y1, float X2, float Y2) {
	return sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
}

void Triangle::calculations() {
	sideLong_a = sideLong(x1, y1, x2, y2);
	sideLong_b = sideLong(x2, y2, x3, y3);
	sideLong_c = sideLong(x1, y1, x3, y3);
	perimeter = sideLong_a + sideLong_b + sideLong_c;
	checkTriangleType();
}

void Triangle::checkTriangleType() {
	if (sideLong_a + sideLong_b <= sideLong_c || sideLong_a + sideLong_c <= sideLong_b || sideLong_b + sideLong_c <= sideLong_a)
		triangleType = 0;	//Треугольник не существует
	else
		if ((sideLong_a == sqrt(sideLong_b*sideLong_b + sideLong_c*sideLong_c)) ||
			(sideLong_b == sqrt(sideLong_a*sideLong_a + sideLong_c*sideLong_c)) ||
			(sideLong_c == sqrt(sideLong_a*sideLong_a + sideLong_b*sideLong_b)))
			triangleType = 3;	//Прямоугольный
		else
			if (sideLong_a == sideLong_b && sideLong_b == sideLong_c)
				triangleType = 2;	//Равносторонний
			else
				if (sideLong_a != sideLong_b && sideLong_a != sideLong_c && sideLong_b != sideLong_c)
					triangleType = 1;	//Разносторонний
			else
				triangleType = 4;	//Равнобедренный
}

char* Triangle::printTriangleType() {
	char *triangleTypeName[26];
	switch (triangleType) {
	case 0: *triangleTypeName = "Треугольник не существует"; break;
	case 1: *triangleTypeName = "Разносторонний"; break;
	case 2: *triangleTypeName = "Равносторонний"; break;
	case 3: *triangleTypeName = "Прямоугольный"; break;
	case 4: *triangleTypeName = "Равнобедренный"; break;
	};
	return *triangleTypeName;
}