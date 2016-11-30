#pragma once
#include "stdafx.h"
#include "Continent.h"
#include "Sea.h"


class Island :
public Sea
{
public:
	bool life ;
	Island();
	void Abstract::toConsole();
	void Abstract::set();
		string getname();
	~Island();	
};