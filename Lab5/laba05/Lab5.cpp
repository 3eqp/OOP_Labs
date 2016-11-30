#include "stdafx.h"
#include "Island.h"
#include "Continent.h"
#include "Land.h"
#include "Sea.h"
#include "State.h"
#include "Abstract.h"
#include "Planet.h"
#include "Controler.h"

int main()
{
	setlocale(LC_ALL , "Russian");
	
	Continent b; Island c,p; State d; Sea e,g;

	cout << "Класс : Continent" << endl;

	b.set();
	b.toConsole();

	cout << endl;

	cout << "Класс : Island" << endl;

	c.set();
	c.toConsole();

	cout << endl;
	cout << "Класс : Island" << endl;
	p.set();
	p.toConsole();
	cout << endl;

	cout << "Класс : State" << endl;

	d.set();
	d.toConsole();
	cout << endl;


	cout << "Класс : Sea" << endl;

	e.set();
	e.toConsole();
	
	cout << endl;

	g.set();
	g.toConsole();
	cout << endl;

	Continent *bb = &b;
	Island *cc = &c;
	Island *pp = &p;
	State *dd = &d;
	Sea *ee = &e;
	Sea *gg = &g;


	int ssize = 0;
	Planet r;  
		r.set(bb,ssize);
		ssize++;
		r.set(cc,ssize);
		ssize++;
		r.set(pp, ssize);
		ssize++;
		r.set(dd, ssize);
		ssize++;
		r.set(ee, ssize);
		ssize++;
		r.set(gg, ssize);
		ssize++;
		
	r.showArr(ssize);
	r.delet(ssize);
	r.showArr(ssize);
	Controler s;
	s.seas(r,ssize);
	s.islands(r,ssize);
	s.state(r,ssize);

	system("pause");
	return 0;
}
