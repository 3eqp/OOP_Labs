#include "StdAfx.h"
#include "country.h"
#include <iostream>

using namespace std;

Country::Country(void) {
	cout << "вызывается конструктор завкафедры" << endl;
}

void Country::setkafedra(char *kafedra) {
	this->kafedra = kafedra;
}

void Country::getkafedra() {
	cout << "кафедра заведующего: " << this->kafedra << endl;
}

Country::~Country(void) {
	cout << "вызывается деструктор завкафедры" << endl;
}