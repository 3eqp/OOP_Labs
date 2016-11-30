#include "stdafx.h"
#include "Island.h"

Island::Island()
{
	cout << "Конструктор класса Island " << endl;
}

void Island::toConsole()
{
	cout << "Class Island" << endl;
	cout << "Название острова : " << name << endl;
	if (life == true)
		cout << "Обитаемый" << endl;
	else
		cout << "Необитаемый" << endl;
}

void Island::set()
{
	cout << "Введите название : ";
	cin >> name;
	cout << endl;
	cout << "Обитаемый ? (1-да , 2 - нет) : ";
	cin >> life;
}

string Island::getname()
{
	return name;
}

Island::~Island()
{
	cout << "Деструктор класса Island " << endl;
}