#pragma once
#include "geo.h"
#include <string>
class Sea;

class Curator {
public:
	void iCanModify(Sea& any) {};
};

class Inspector;

class Sea :
	public Geo 
{
	int sea_area;
public:
	Sea(void);
	//ÇÀÄÀÍÈÅ ¹4
	const int lol = 777;
	const int newlol();
	void setsea_area(int sea_area);
	void getsea_area();
	~Sea(void);
	virtual void area() {
		cout << "lolsea" << endl;
	};
	void toConsole()
	{
		cout << typeid(this).name() << endl;
	};

	// ÇÀÄÀÍÈÅ ¹5

	void f() {};

private:
	int codeNumber = 88082029;
	string codeName = "Vopper";
	friend Inspector;
	friend void Curator::iCanModify(Sea&);
};

class Inspector {
public:
	void iKnowAllAboutYou(Sea& any) {
		cout << any.codeName << " " << any.codeNumber << endl;
	}
};