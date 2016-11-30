#pragma once
#include "stdafx.h"
#include "Continent.h"


class State :
	public Continent
{
public:
	string capital;
	double population;
	void Abstract::toConsole();
	void Abstract::set();
	State();
	~State();
};