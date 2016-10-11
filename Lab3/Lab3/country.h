#pragma once
#include "sea.h"
class Country :
	public Sea
{
	char *name;
public:
	Country(void);
	void setname(char *name);
	void getname();
	~Country(void);
};