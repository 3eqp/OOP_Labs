#include "stdafx.h"
#include "triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle() {
}

Triangle::Triangle(int X1, int Y1, int X2, int Y2, int X3, int Y3) {
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

void Triangle::print() {
	cout << "A = (" << x1 << ";" << y1 << ")" << endl;
	cout << "B = (" << x2 << ";" << y2 << ")" << endl;
	cout << "C = (" << x3 << ";" << y3 << ")" << endl;
	cout << "Side a = " << sideLong_a << endl;
	cout << "Side b = " << sideLong_b << endl;
	cout << "Side c = " << sideLong_c << endl;
	cout << "Perimeter = " << perimeter << endl;
}

int Triangle::sideLong(int X1, int Y1, int X2, int Y2) {
	return sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
}

void Triangle::calculations() {
	sideLong_a = sideLong(x1, y1, x2, y2);
	sideLong_b = sideLong(x2, y2, x3, y3);
	sideLong_c = sideLong(x1, y1, x3, y3);
	cout << "calculation done!" << endl;
	perimeter = sideLong_a + sideLong_b + sideLong_c;
}