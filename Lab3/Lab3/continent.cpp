#include "StdAfx.h"
#include "continent.h"
#include <iostream>

using namespace std;

Continent::Continent(void) {
	cout << "���������� ����������� ����������" << endl;
}

void Continent::setcontinent_area(int continent_area) {
	this->continent_area = continent_area;
}

void Continent::getcontinent_area() {
	cout << "������� ����������: " << this->continent_area << endl;
}

Continent::~Continent(void) {
	cout << "���������� ���������� ����������" << endl;
}