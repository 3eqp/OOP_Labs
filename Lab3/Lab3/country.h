#pragma once
#include "sea.h"
class Country :
	public Sea
{
	char *kafedra;
public:
	Country(void);
	void setkafedra(char *kafedra);
	void getkafedra();
	~Country(void);
};