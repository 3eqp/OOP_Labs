#pragma once
#include "stdafx.h"
using namespace std;

class Triangle {
private:
	int a, b, c;
	int x1, y1, x2, y2, x3, y3;
	int sideLong_a, sideLong_b, sideLong_c;
	int perimeter;
public: Triangle();
		Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
		void changeCoordinates();
		~Triangle(void);
		void print();
		int sideLong(int X1, int Y1, int X2, int Y2);
		void calculations();
};