#include "StdAfx.h"
#include "sea.h"
#include <iostream>

using namespace std;

Sea::Sea(void) {
	cout << "���������� ����������� ����" << endl;
}

void Sea::setsea_area(int sea_area) {
	this->sea_area = sea_area;
}

void Sea::getsea_area() {
	cout << "������������� ����: " << this->sea_area << endl;
}

Sea::~Sea(void) {
	cout << "���������� ���������� ����" << endl;
}