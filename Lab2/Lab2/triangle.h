#pragma once
#include "stdafx.h"
using namespace std;

class Triangle {
private:
	int type;
	int x1, y1, x2, y2, x3, y3;
	int sideLong_a, sideLong_b, sideLong_c;
	int perimeter;
public: Triangle();
		Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
		~Triangle(void);
		void changeCoordinates();
		void print(int currentTriangle);
		int sideLong(int X1, int Y1, int X2, int Y2);
		void calculations();
		void checkTriangleType();
};