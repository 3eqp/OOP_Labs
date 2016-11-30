#pragma once
#include "stdafx.h"
#include "Continent.h"

class Sea:
public Abstract
{
public:

	string name;
	Sea();
	void Abstract::set();
	void Abstract::toConsole();
	~Sea();
};