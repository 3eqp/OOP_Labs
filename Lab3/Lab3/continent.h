#pragma once
#include "geo.h"
class Continent :
	public Geo
{
	int area;
public:
	Continent(void);
	void setarea(int x);
	void getarea();
	~Continent(void);
};