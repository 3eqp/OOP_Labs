#include "StdAfx.h"
#include "land.h"
#include <iostream>

using namespace std;

Land::Land(void) {
	cout << "���������� ����������� ����" << endl;
}

void Land::setland_area(int x) {
	this->land_area = x;
}

void Land::getland_area() {
	cout << "������� ����: " << this->land_area << endl;
}

Land::~Land(void) {
	cout << "���������� ���������� ����" << endl;
}