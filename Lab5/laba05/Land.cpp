#include "stdafx.h"
#include "Land.h"

Land::Land()
{

}

void Land::toConsole()
{
	cout << "Class Land" << endl;
	cout << "ѕлощадь суши (кв.км.) : " << area << endl;
}


void  Land :: set()
{
	cout << "¬ведите площадь суши (кв.км.) : ";
	cin >> area;
}

Land::~Land()
{
	cout << "ƒеструктор класса Land" << endl;
}