#include "StdAfx.h"
#include "continent.h"
#include <iostream>

using namespace std;

Continent::Continent(void) {
	cout << "���������� ����������� ����������" << endl;
}

void Continent::setarea(int x) {
	this->area = x;
}

void Continent::getarea() {
	cout << "������� ����������: " << this->area << endl;
}

Continent::~Continent(void) {
	cout << "���������� ���������� ����������" << endl;
}