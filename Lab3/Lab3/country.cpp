#include "StdAfx.h"
#include "country.h"
#include <iostream>

using namespace std;

Country::Country(void) {
	cout << "���������� ����������� ����������" << endl;
}

void Country::setkafedra(char *kafedra) {
	this->kafedra = kafedra;
}

void Country::getkafedra() {
	cout << "������� �����������: " << this->kafedra << endl;
}

Country::~Country(void) {
	cout << "���������� ���������� ����������" << endl;
}