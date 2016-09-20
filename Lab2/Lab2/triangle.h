#pragma once
#include "stdafx.h"
using namespace std;

class Triangle {
private:
	int x1, y1, x2, y2, x3, y3;
	double sideLong_a, sideLong_b, sideLong_c;
	int perimeter;
public: Triangle();
		Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
		~Triangle(void);

		int triangleType;

		void changeCoordinates();
		void print(int currentTriangle);
		double sideLong(int X1, int Y1, int X2, int Y2);
		void calculations();
		void checkTriangleType();
		char* printTriangleType();
};