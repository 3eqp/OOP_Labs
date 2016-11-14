//sea continent country island land

#include "stdafx.h"
#include "geo.h"
#include "sea.h"
#include "continent.h"
#include "country.h"
#include "island.h"
#include "land.h"
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
	b.setsea_area(18040);
	b.getsea_area();
	cout << endl;

	Continent c;
	c.setname("Континентик");
	c.getname();
	c.setcontinent_area(1000);
	c.getcontinent_area();
	cout << endl;

	Country d;
	d.setcountry_name("Буржузия");
	d.getcountry_name();
	d.setcontinent_area(2000);
	d.getcontinent_area();
	cout << endl;

	Land l;
	l.setname("Земелька");
	l.getname();
	l.setland_area(77777);
	l.getland_area();
	l.setcontinent_area(32453455);
	l.getcontinent_area();
	cout << endl;

	Island i;
	i.setname("Островок");
	i.getname();
	i.setisland_area(423342);
	i.getisland_area();
	i.setsea_area(43253);
	i.getsea_area();
	cout << endl;

	return 0;
}