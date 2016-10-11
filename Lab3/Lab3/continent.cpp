#include "StdAfx.h"
#include "continent.h"
#include <iostream>

using namespace std;

Continent::Continent(void) {
	cout << "вызывается конструктор континента" << endl;
}

void Continent::setarea(int x) {
	this->area = x;
}

void Continent::getarea() {
	cout << "площадь континента: " << this->area << endl;
}

Continent::~Continent(void) {
	cout << "вызывается деструктор континента" << endl;
}