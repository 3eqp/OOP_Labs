#include "StdAfx.h"
#include "sea.h"
#include <iostream>

using namespace std;

Sea::Sea(void) {
	cout << "вызывается конструктор преподавателя" << endl;
}

void Sea::setzarplata(int zarplata) {
	this->zarplata = zarplata;
}

void Sea::getzarplata() {
	cout << "зарплата преподавателя: " << this->zarplata << endl;
}

Sea::~Sea(void) {
	cout << "вызывается деструктор преподавателя" << endl;
}