#pragma once
#include <iostream>
using namespace std;

class Triangle
{
	struct Point
	{
		int x = 0;
		int y = 0;
	};
	Point p[3];
public:
	Triangle()
	{
		for (int i = 0; i < 3; i++)
		{
			p[i].x = rand() % 100;
			p[i].y = rand() % 100;
		}
	}

	Triangle(int x1, int y1, int x2, int y2, int x3, int y3)
	{
		p[0].x = x1;
		p[0].y = y1;
		p[1].x = x2;
		p[1].y = y2;
		p[2].x = x3;
		p[2].y = y3;
	}

	operator int()
	{
		int a = sqrt(pow(p[1].x - p[0].x, 2) + pow(p[1].y - p[0].y, 2));
		int b = sqrt(pow(p[2].x - p[1].x, 2) + pow(p[2].y - p[1].y, 2));
		int c = sqrt(pow(p[2].x - p[0].x, 2) + pow(p[2].y - p[0].y, 2));
		return a + b + c;
	}

	/*int length(int x1, int x2, int y1, int y2)
	{
	int a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return a;
	}
	int perimeter()
	{
	return length(p[0].x, p[1].x, p[0].y, p[1].y) + length(p[2].x, p[3].x, p[2].y, p[3].y) + length(p[3].x, p[1].x, p[3].y, p[1].y);
	}*/

	void setPoint(int numb, int x, int y)
	{
		if (numb > 0 && numb < 4)
		{
			numb--;
			p[numb].x = x;
			p[numb].y = y;
		}
	}

	int getX(int numb)
	{
		if (numb > 0 && numb < 4)
		{
			numb--;
			return p[numb].x;
		}
		else {
			return 0;
		}
	}

	double getY(int numb)
	{
		if (numb > 0 && numb < 4)
		{
			numb--;
			return p[numb].y;
		}
		else {
			return 0;
		}
	}

	friend ostream& operator << (ostream& output, Triangle& tr)
	{
		output << "\nTriangle:\n";
		for (int i = 0; i < 3; i++)
		{
			output << "   x" << i + 1 << ": " << tr.p[i].x << " y" << i + 1 << ": " << tr.p[i].y << endl;
		}
		output << "p = " << (int)tr;
		return output;
	}
	friend bool operator < (Triangle & left, Triangle & right) {
		if ((int)left < (int)right) {
			return true;
		}
		else {
			return false;
		}
	}
};