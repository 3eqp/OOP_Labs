#pragma once
#include "continent.h"
#include "sea.h"

class Island :
	public Sea
{
	int island_area;
private:
	static int counter;
public:
	Island(void);
	void setisland_area(int x);
	void getisland_area();
	~Island(void);
	void toConsole()
	{
		cout << typeid(this).name() << endl;
	};

	//TASK 6
	
	static int getCounter() {
		return counter;
	}
};