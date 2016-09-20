#pragma once
#include "stdafx.h"
using namespace std;

class Triangle {
private:
	float x1, y1, x2, y2, x3, y3;
	float sideLong_a, sideLong_b, sideLong_c;
public: Triangle();
		Triangle(float x1, float y1, float x2, float y2, float x3, float y3);
		~Triangle(void);

		int triangleType;
		int perimeter;

		void changeCoordinates();
		void print(int currentTriangle);
		float sideLong(float X1, float Y1, float X2, float Y2);
		void calculations();
		void checkTriangleType();
		char* printTriangleType();
};