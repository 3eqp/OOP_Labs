#include "StdAfx.h"
#include "continent.h"
#include <iostream>

using namespace std;

Continent::Continent(void) {
	cout << "���������� ����������� ��������" << endl;
}

void Continent::setstependia(int x) {
	this->stependia = x;
}

void Continent::getstependia() {
	cout << "��������� ��������: " << this->stependia << endl;
}

Continent::~Continent(void) {
	cout << "���������� ���������� ��������" << endl;
}