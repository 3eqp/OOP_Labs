#include "stdafx.h"
#include "Sea.h"


Sea::Sea()
{
	cout << "Конструктор класса Sea" << endl;
}

void Sea::toConsole()
{
	cout << "Class Sea" << endl;
	cout << "Имя : " << name << endl;
}

void Sea::set()
{

	cout << "Введите название моря : ";
	cin >> name;
}

Sea::~Sea()
{
	cout << "Деструктор класса Sea" << endl;
}