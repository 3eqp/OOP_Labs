#pragma once
#include <iostream>
using namespace std;
class Geo {
	char *name;
public:
	class geoClass {
		int geoVariable;
	};
	virtual int area(int count)
	{
		return 1;
	};
	Geo(void);
	void setname(char *name);
	void getname();
	~Geo(void);
	virtual void toConsole() = 0;
};

// ÇÀÄÀÍÈÅ ¹1

class Wild;
class Human;
class NEWS;
class Cosmos
{
public:
	friend Human;
	int abc = 100;
private:
	int acb = 10;
protected:
	int askfjsd = 1;
};
class Human : protected Cosmos
{
public:
	int lsad = 200;
};
class NEWS : public Human
{
public: int sakouwr = 343;
};

class Wild
{
public:
	class Nested_class
	{
	public:
		int one = 1;
		void Outside_class_check(Wild &any)
		{
			any.isreal();
		};
	};
	Nested_class* b;
	int inside_class_check()
	{
		return this->b->one;
	};

	bool real = true;
	bool isreal();
	
protected:
	bool isnotreal();
};