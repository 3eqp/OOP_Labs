#include "StdAfx.h"
#include "sea.h"
#include <iostream>

using namespace std;

Sea::Sea(void) {
	cout << "���������� ����������� �������������" << endl;
}

void Sea::setzarplata(int zarplata) {
	this->zarplata = zarplata;
}

void Sea::getzarplata() {
	cout << "�������� �������������: " << this->zarplata << endl;
}

Sea::~Sea(void) {
	cout << "���������� ���������� �������������" << endl;
}