#include "stdafx.h"
#include "triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle() {
}

Triangle::Triangle(int) {
}

void Triangle::setCoordinates(int x1, ...) {
	cout << "Enter A(x,y)" << endl;
	cin >> Triangle::x1 >> Triangle::y1;
	cout << "Enter B(x,y)" << endl;
	cin >> Triangle::x2 >> Triangle::y2;
	cout << "Enter C(x,y)" << endl;
	cin >> Triangle::x2 >> Triangle::y2;
}

Triangle::~Triangle(void) {
}

void Triangle::print() {
	cout << "A = (" << Triangle::x1 << ";" << Triangle::y1 << ")" << endl;
	cout << "A = (" << Triangle::x2 << ";" << Triangle::y2 << ")" << endl;
	cout << "A = (" << Triangle::x3 << ";" << Triangle::y3 << ")" << endl;
	cout << "AB = " << Triangle::sideLong_AB << endl;
	cout << "BC = " << Triangle::sideLong_BC << endl;
	cout << "AC = " << Triangle::sideLong_AC << endl;
}

int Triangle::sideLong(int X1, int Y1, int X2, int Y2) {
	return sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
}

void Triangle::calculations(int x1, int x2, int y1, int y2, int x3, int y3) {
	sideLong_AB = sideLong(x1, y1, x2, y2);
	sideLong_BC = sideLong(x2, y2, x3, y3);
	sideLong_AC = sideLong(x1, y1, x3, y3);

	perimeter = sideLong_AB + sideLong_BC + sideLong_AC;
}
