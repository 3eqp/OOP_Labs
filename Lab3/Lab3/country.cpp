#include "StdAfx.h"
#include "country.h"
#include <iostream>

using namespace std;

Country::Country(void) {
	cout << "���������� ����������� ������" << endl;
}

void Country::setname(char *name) {
	this->name = name;
}

void Country::getname() {
	cout << "�������� ������: " << this->name << endl;
}

Country::~Country(void) {
	cout << "���������� ���������� ������" << endl;
}