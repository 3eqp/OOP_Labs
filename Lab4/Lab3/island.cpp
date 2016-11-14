#include "StdAfx.h"
#include "island.h"
#include <iostream>

using namespace std;

Island::Island(void) {
	cout << "вызывается конструктор острова" << endl;
}

void Island::setisland_area(int x) {
	this->island_area = x;
}

void Island::getisland_area() {
	cout << "площадь острова: " << this->island_area << endl;
}

Island::~Island(void) {
	cout << "вызывается деструктор острова" << endl;
}