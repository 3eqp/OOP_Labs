#pragma once
#include "continent.h"
#include "land.h"
class Country :
	public Continent
{
	char *country_name;
public:
	Country(void);
	void setcountry_name(char *country_name);
	void getcountry_name();
	~Country(void);
};