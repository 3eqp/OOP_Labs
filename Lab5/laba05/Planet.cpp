#include "stdafx.h"
#include "Planet.h"
#include "Abstract.h"


int Planet::set(Abstract *obj, int size)
{
		Arr[size] = obj;
		return size;
}

void Planet::showArr(int ssize)
{
	for (int i = 0; i < ssize; i++)
	{
		if (Arr[i] == NULL) { continue; }
		Arr[i]->toConsole();
	}
}

void Planet::delet(int ssize)
{
	int i;
	cout << "Введите номер удаляемого элемента : " ;
	cin >> i;
	int j = i - 1;
	for (j ; j < ssize; j++)
	{

	if (j == (ssize - 1)) 
	{
	Arr[j] = NULL;
	continue;
	}
		Arr[j] = Arr[j+1];
	}
	ssize--;
}