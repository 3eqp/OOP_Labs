#include "StdAfx.h"
#include "country.h"
#include <iostream>

using namespace std;

Country::Country(void) {
	cout << "вызывается конструктор страны" << endl;
}

void Country::setname(char *name) {
	this->name = name;
}

void Country::getname() {
	cout << "название страны: " << this->name << endl;
}

Country::~Country(void) {
	cout << "вызывается деструктор страны" << endl;
}