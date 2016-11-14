#pragma once
#include "geo.h"
class Continent :
	public Geo
{
	int continent_area;
public:
	Continent(void);
	void setcontinent_area(int continent_area);
	void getcontinent_area();
	~Continent(void);
};