#include "StdAfx.h"
#include "country.h"
#include <iostream>

using namespace std;

Country::Country(void) {
	cout << "вызывается конструктор страны" << endl;
}

void Country::setcountry_name(char *country_name) {
	this->country_name = country_name;
}

void Country::getcountry_name() {
	cout << "название страны: " << this->country_name << endl;
}

Country::~Country(void) {
	cout << "вызывается деструктор страны" << endl;
}