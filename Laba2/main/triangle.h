#pragma once
#include "stdafx.h"
using namespace std;

class Triangle {
public: Triangle();
		Triangle(int);
		void setCoordinates(int x1, ...);
		~Triangle(void);
		void print();
		int sideLong(int X1, int Y1, int X2, int Y2);
		void calculations(int X1, int Y1, int X2, int Y2, int X3, int Y3);
private:
	int x1, y1, x2, y2, x3, y3;
	int sideLong_AB, sideLong_BC, sideLong_AC;
	int perimeter;
};