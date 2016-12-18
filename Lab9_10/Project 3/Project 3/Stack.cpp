#include "stdafx.h"
#include <iostream>
#include "Stack.h"
#include <cassert>
#include <iomanip>
using namespace std;

Stack::Stack(int maxSize) : size(maxSize) //инициализация константы
{
	pstack = new int[size];
	top = 0;
	sum = 0;
}

Stack::Stack(const Stack& otherStack) : size(otherStack.getStackSize())
{
	//cout << "\nСработал конструктор копирования!\n";
	pstack = new int[size]; // выделение памяти под новый стек
	top = otherStack.getTop();
	for (int i = 0; i < top; i++)
	{
		pstack[i] = otherStack.pstack[i];
		sum = sum + pstack[i];
	}
}

Stack::~Stack()
{
	delete[] pstack;
}

void Stack::operator+(const int &element)
{
	assert(top < size);
	pstack[top++] = element;
}

int Stack::operator-(int element)
{
	assert(top > 0);
	--top;
	return pstack[top];
}

void Stack::printStack() const
{
	if (!top)
	{
		cout << "Стек пуст!\n";
	}
	else
	{
		for (int i = top - 1; i >= 0; i--)
		{
			cout << setw(4) << pstack[i] << " ";
		}
	}
}

const int &Stack::Peek(int element) const
{
	assert(element <= top);
	return pstack[top - element];
}

int Stack::getStackSize() const
{
	return size;
}

/*int *Stack::getP() const
{
return pstack;
}*/

int Stack::getTop() const
{
	return top;
}

Stack::operator bool()
{
	return !top;
}

void Stack::operator>(int size)
{
	Stack ABC_2;
	int *Array = new int[size];
	int Add_Array = 0;

	for (int i = 0; i < size; i++)
	{
		Array[i] = this->Peek(top - i);
	}

	for (int i = 0; i < size; i++)
		cout << Array[i] << " ";
	cout << endl << endl;

	for (int i = size; i > 1; i--)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (Array[j] < Array[j + 1])
			{
				swap(Array[j], Array[j + 1]);
			}
		}
	}

	for (int i = 0; i < size; i++)
		cout << Array[i] << " ";
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		ABC_2 + Array[i];
	}
	ABC_2.printStack();
}

int Stack::getSum()
{
	sum = 0;
	for (int i = top - 1; i >= 0; i--)
		sum = sum + this->pstack[i];
	cout << "Сумма = " << sum;
	return sum;
}

int Stack::getSum_()
{
	sum = 0;
	for (int i = top - 1; i >= 0; i--)
		sum = sum + this->pstack[i];
	return sum;
}

istream & operator>>(istream & input, Stack & st) {
	while (st.operator bool()) {
		st + (rand() % 99 + 1);
	}
	return input;
}

ostream & operator<<(ostream & output, const Stack  st) {
	for (int i = st.top - 1; i >= 0; i--)
	{
		output << st.pstack[i] << " ";
	}
	
	return output;
}