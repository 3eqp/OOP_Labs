#pragma once
#include "stdafx.h"
#include "Abstract.h"

class Land :public Abstract
{
public:
	double area;
	void Abstract :: set();
	void Abstract :: toConsole();
	Land();
	~Land();
};