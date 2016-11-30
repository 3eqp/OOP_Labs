#include "stdafx.h"
#include "Continent.h"

Continent::Continent()
{
	cout << "Конструктор класса Continent" << endl;
}

void Continent::toConsole()
{
	cout << "Class Continent" << endl;
	cout << "Название : " << name << endl;
	cout << "Площадь : " << area << endl;
	cout <<"Государства континента : " << statess << endl;
}

void Continent::set()
{
	cout << "Введите название : ";
	cin >> name;
	cout << endl;
	cout << "Введите площадь : ";
	cin >> area;
	cout << "Введите государства континента (через ,) : ";
	cin >> statess;
	cout << endl;
}



Continent::~Continent()
{
	cout << "Деструктор класса Continent" << endl;
}