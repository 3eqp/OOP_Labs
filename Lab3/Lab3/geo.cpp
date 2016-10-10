#include "StdAfx.h"
#include "geo.h"
#include <iostream>

using namespace std;

Geo::Geo(void) {
	cout << "вызывается конструктор персоны" << endl;
}

void Geo::setname(char *name) {
	this->name = name;
}

void Geo::getname() {
	cout << "имя персоны: " << this->name << endl;
}

Geo::~Geo(void) {
	cout << "вызывается деструктор персоны" << endl;
}