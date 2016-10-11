#include "StdAfx.h"
#include "sea.h"
#include <iostream>

using namespace std;

Sea::Sea(void) {
	cout << "вызывается конструктор моря" << endl;
}

void Sea::setwidth(int width) {
	this->width = width;
}

void Sea::getwidth() {
	cout << "протяженность моря: " << this->width << endl;
}

Sea::~Sea(void) {
	cout << "вызывается деструктор моря" << endl;
}