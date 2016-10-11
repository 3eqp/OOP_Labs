#pragma once
#include "geo.h"
class Sea :
	public Geo 
{
	int width;
public:
	Sea(void);
	void setwidth(int zarplata);
	void getwidth();
	~Sea(void);
};