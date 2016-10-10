#include "StdAfx.h"
#include "continent.h"
#include <iostream>

using namespace std;

Continent::Continent(void) {
	cout << "вызываетс€ конструктор студента" << endl;
}

void Continent::setstependia(int x) {
	this->stependia = x;
}

void Continent::getstependia() {
	cout << "степенди€ студента: " << this->stependia << endl;
}

Continent::~Continent(void) {
	cout << "вызываетс€ деструктор студента" << endl;
}