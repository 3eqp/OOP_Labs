#pragma once
#include "continent.h"
#include "sea.h"

class Island :
	public Sea
{
	int island_area;
public:
	Island(void);
	void setisland_area(int x);
	void getisland_area();
	~Island(void);
};