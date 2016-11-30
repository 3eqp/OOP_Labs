#pragma once
#include "stdafx.h"
#include "Abstract.h"
#include "Land.h"
#include "Continent.h"
#include "Island.h"
#include "Sea.h"
#include "State.h"



class Planet
{
public:
	Abstract *Arr[100];
	int set(Abstract *obj, int size);
	void showArr(int ssize);
	void delet(int ssize);
};