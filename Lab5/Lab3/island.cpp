#include "StdAfx.h"
#include "island.h"
#include <iostream>

using namespace std;

Island::Island(void) {
	cout << "���������� ����������� �������" << endl;
	counter++;
}

void Island::setisland_area(int x) {
	this->island_area = x;
}

void Island::getisland_area() {
	cout << "������� �������: " << this->island_area << endl;
}

Island::~Island(void) {
	cout << "���������� ���������� �������" << endl;
	counter--;
}

int Island::counter = 0;