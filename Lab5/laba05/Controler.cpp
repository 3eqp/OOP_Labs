#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include "Controler.h"

void Controler::seas(Planet m, int ssize)
{
	int summa = 0;
	for (int i = 0; i <ssize; i++)
	{

		if (dynamic_cast<Sea*>(m.Arr[i]) != NULL && !(dynamic_cast<Island*>(m.Arr[i])))
		{
			summa++;
		}
	}
	cout << "Кличество морей : " << summa << endl;
}

void Controler::islands(Planet n, int ssize)
{
	string arrs[100];
	Island *a;
	int j = 0;
	for (int i = 0; i <ssize; i++)
	{
		a = dynamic_cast<Island*>(n.Arr[i]);
		if (a != NULL)
		{
			arrs[j] = a->getname();
			j++;
		}
	}
	cout << "Острова : ";

	for (int i = 0; i < j; i++)
	{
		
		cout << arrs[i] << " ";
		
	}
	cout << endl;
}

void Controler::state(Planet b, int ssize)
{
	Continent *a,*t,*r;
	string ccname;
	cout << "Введите имя интересуещего континента : ";
	cin >> ccname;
	for (int i = 0; i < ssize; i++)
	{
		r = dynamic_cast<Continent*>(b.Arr[i]);
		if (r != NULL) {
			if (ccname == r->name)
			{
				a = dynamic_cast<Continent*>(b.Arr[i]);
				t = dynamic_cast<State*>(b.Arr[i]);
				if (a != NULL && !t)
				{
					a->toConsole();
				}
			}
		}
	}
}