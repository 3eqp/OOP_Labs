#include <iostream>
#include <cstring>
#pragma once

using namespace std;

class Error : public exception {
protected:
	char message[80];
	int temp;
public:
	Error() {}
	Error(char *my_message, int tmp)
	{
		strcpy_s(message, my_message);
		temp = tmp;
	}
	const char* what() const override {
		cout << "Error catched" << endl;
		char* buf = new char[400];
		strcpy_s(buf, 50, message);
		cout << message << "0" << endl;
		return buf;
	}
	virtual void show(void) = 0;

	/*void show()
	{
		std::cout << "Произошло исключение: ";
		std::cout << message << std::endl;
	}*/
};

class Overflow: public Error
{
public:
	Overflow(char *my_message)
	{
		strcpy_s(message, my_message);
	}
	virtual void show()
	{
		cout << "Произошло исключение переполнения: " << endl;
		cout << message << endl;
	}
};

class IncorrectIndex: public Error
{
public:
	IncorrectIndex(char *my_message)
	{
		strcpy_s(message, my_message);
	}
	virtual void show()
	{
		cout << "Произошло исключение неправильного индекса: " << endl;
		cout << message << endl;
	}
};

class IncorrectOutput: public Error
{
public:
	IncorrectOutput(char *my_message)
	{
		strcpy_s(message, my_message);
	}
	virtual void show()
	{
		cout << "Произошло исключение неправильного вывода: " << endl;
		cout << message << endl;
	}
};

class IncorrectSize : public Error
{
	int size;
public:
	IncorrectSize(char *my_message, int my_size)
	{
		assert(my_size < 0);
		cout << "**********   I'm working!!   ***********" << endl;
		strcpy_s(message, my_message);
		size = my_size;
	}
	virtual void show()
	{
		cout << "Произошло исключение неправильного размера: " << endl;
		cout << message << size << endl;
	}
};

class IncorrectNew : public Error
{
public:
	IncorrectNew (char *my_message)
	{
		strcpy_s(message, my_message);
	}
	virtual void show()
	{
		cout << message << endl;
	}
};