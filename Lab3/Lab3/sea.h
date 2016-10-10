#pragma once
#include "geo.h"
class Sea :
	public Geo 
{
	int zarplata;
public:
	Sea(void);
	void setzarplata(int zarplata);
	void getzarplata();
	~Sea(void);
};