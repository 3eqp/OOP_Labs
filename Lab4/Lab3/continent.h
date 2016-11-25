#pragma once
#include "geo.h"
#include <iostream>
using namespace std;
class Continent :
	public Geo
{
	int continent_area;
public:
	Continent(void);
	void setcontinent_area(int continent_area);
	void getcontinent_area();
	~Continent(void);
	virtual void area() {
		cout << "lol" << endl;
	}
	void toConsole()
	{
		cout << typeid(this).name() << endl;
	};
};