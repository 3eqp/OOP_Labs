#include "StdAfx.h"
#include "sea.h"
#include <iostream>

using namespace std;

Sea::Sea(void) {
	cout << "���������� ����������� ����" << endl;
}

void Sea::setwidth(int width) {
	this->width = width;
}

void Sea::getwidth() {
	cout << "������������� ����: " << this->width << endl;
}

Sea::~Sea(void) {
	cout << "���������� ���������� ����" << endl;
}