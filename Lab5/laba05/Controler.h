#pragma once
#include "stdafx.h"
#include "Planet.h"
#include "Island.h"
class Controler:
	public Planet
{

public:
	void seas(Planet m, int ssize);
	void islands(Planet n, int ssize);
	void state(Planet b, int ssize);
};