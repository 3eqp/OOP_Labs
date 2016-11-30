#include "stdafx.h"
#include "State.h"

State::State()
{
	cout << "Конструктор класса State" << endl;
}

void State::toConsole()
{
	cout << "Class State" << endl;
	
	cout << "Название Гос-ва: " << name << endl;
	cout << "Столица : " << capital << endl;
	cout << "Население государства : " << population << endl;
}

void State::set()
{
	cout <<"Введите столицу : " ;
	cin >> capital;
	cout << endl;
	cout << "Введите название гос-ва : ";
	cin >> name;
	cout << endl;
	cout << "Введите население : ";
	cin >> population;
	cout << endl;
}

State::~State()
{
	cout << "Деструктор класса State" << endl;
}