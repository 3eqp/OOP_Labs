#include "StdAfx.h"
#include "geo.h"
#include <iostream>

using namespace std;

Geo::Geo(void) {
	cout << "���������� ������������� �����������" << endl;
}

void Geo::setname(char *name) {
	this->name = name;
}

void Geo::getname() {
	cout << "��� �������: " << this->name << endl;
}

Geo::~Geo(void) {
	cout << "���������� ��������������� ����������" << endl;
}

bool Wild::isreal()
{
	return true;
}

bool Wild::isnotreal()
{
	return false;
}