#include "StdAfx.h"
#include "geo.h"
#include <iostream>

using namespace std;

Geo::Geo(void) {
	cout << "вызывается гографический конструктор" << endl;
}

void Geo::setname(char *name) {
	this->name = name;
}

void Geo::getname() {
	cout << "имя объекта: " << this->name << endl;
}

Geo::~Geo(void) {
	cout << "вызывается георграфический деструктор" << endl;
}

bool Wild::isreal()
{
	return true;
}

bool Wild::isnotreal()
{
	return false;
}