//sea continent country island land

#include "stdafx.h"
#include "geo.h"
#include "sea.h"
#include "continent.h"
#include "country.h"
#include "locale"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	Geo a;
	a.setname("Земля");
	a.getname();
	cout << endl;
	Sea b;
	b.setname("Черное море");
	b.getname();
	b.setwidth(18040);
	b.getwidth();
	cout << endl;
	Continent c;
	c.setname("Континентик");
	c.getname();
	c.setarea(101900);
	c.getarea();
	cout << endl;
	Country d;
	d.setname("Буржузия");
	d.getname();
	d.setwidth(21020);
	d.getwidth();
	cout << endl;
	return 0;
}