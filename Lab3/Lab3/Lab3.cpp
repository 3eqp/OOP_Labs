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
	a.setname("���������");
	a.getname();
	cout << endl;
	Sea b;
	b.setname("������ �������");
	b.getname();
	b.setzarplata(1800000);
	b.getzarplata();
	cout << endl;
	Continent c;
	c.setname("������ ����");
	c.getname();
	c.setstependia(101900);
	c.getstependia();
	cout << endl;
	Country d;
	d.setname("����� �������� ��������");
	d.getname();
	d.setzarplata(2300000);
	d.getzarplata();
	d.setkafedra("����");
	d.getkafedra();
	cout << endl;
	return 0;
}