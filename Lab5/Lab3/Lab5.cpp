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

	/*
	Wild wild;
	Wild::Nested_class Nest;
	Nest.Outside_class_check(wild);
	Curator Normal;
	wild.isreal();

	Sea b;
	b.setname("Черное море");
	b.getname();
	b.setsea_area(18040);
	b.getsea_area();
	b.newlol();

	Human hum;
	NEWS newsfd;

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
	*/

	//5
	Sea s;
	Inspector insp;
	insp.iKnowAllAboutYou(s);


	//6
	Island one;
	cout << "Isles counter: " << one.getCounter();
	Island two;
	cout << "Isles counter: " << two.getCounter();

	//7
	Island *newIsl = new Island;
	Sea *newSea = new Sea;
	Printer alluse;
	alluse.iAmPrinting(newIsl);
	alluse.iAmPrinting(newSea);

	//8
	cout << "**************" << endl;
	Geo *odin = new Sea;
	Geo *dva = new Island;
	Geo *tri = new Land;

	odin->toConsole(); 	cout << endl;

	odin = dynamic_cast<Sea*>(dva); //повышающее-от производного класса к базовому
	tri = dynamic_cast<Land*>(tri); //перекрестное-от производного класса к другому
	dva = dynamic_cast<Island*>(odin); //понижающее-от базoвого класса к производному

	odin->toConsole(); 	cout << endl;
	dva->toConsole(); 	cout << endl;
	tri->toConsole(); 	cout << endl;

	cout << "**************" << endl;

	const int j = 3;
	int* pj = const_cast<int*>(&j); //удаление модификатора const

	cout << "**************" << endl;

	//преобразование типа на этапе компиляции

	/*
	class B {};

	class D : public B {};

	B* pb;
	D* pd;
	D* pd2 = static_cast<D*>(pb);   // Not safe, D can have fields and methods that are not in B.  
	B* pb2 = static_cast<B*>(pd);   // Safe conversion, D always contains all of B.  
	*/

	int N = 18;
	cout << static_cast<double>(N) << endl;

	//https://books.google.by/books?id=UM1LDAAAQBAJ&pg=PA248&lpg=PA248&dq=%D0%BF%D0%B5%D1%80%D0%B5%D0%BA%D1%80%D0%B5%D1%81%D1%82%D0%BD%D0%BE%D0%B5+%D0%BF%D1%80%D0%B5%D0%BE%D0%B1%D1%80%D0%B0%D0%B7%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5+%D0%BC%D0%B5%D0%B6%D0%B4%D1%83+%D0%BA%D0%BB%D0%B0%D1%81%D1%81%D0%B0%D0%BC%D0%B8&source=bl&ots=0OuocUqHEX&sig=XaG5mAlDV3nCbDQ-_D2S6hyOWKs&hl=ru&sa=X&ved=0ahUKEwigwpujwsbQAhUDFCwKHcXNAJEQ6AEIIDAB#v=onepage&q&f=false

	return 0;
}