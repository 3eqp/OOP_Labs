#pragma once
#include "continent.h"
class Land :
	public Continent
{
	int land_area;
public:
	Land(void);
	void setland_area(int x);
	void getland_area();
	~Land(void);
	void toConsole()
	{
		cout << typeid(this).name() << endl;
	};
};