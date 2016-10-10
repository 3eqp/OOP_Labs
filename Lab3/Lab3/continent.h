#pragma once
#include "geo.h"
class Continent :
	public Geo
{
	int stependia;
public:
	Continent(void);
	void setstependia(int x);
	void getstependia();
	~Continent(void);
};