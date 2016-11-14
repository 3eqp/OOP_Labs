#pragma once
#include "geo.h"
class Sea :
	public Geo 
{
	int sea_area;
public:
	Sea(void);
	void setsea_area(int sea_area);
	void getsea_area();
	~Sea(void);
};