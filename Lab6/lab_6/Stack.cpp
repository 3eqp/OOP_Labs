#include "stdafx.h"
#include <iostream>
#include "Stack.h"
#include <cassert>
#include <iomanip>
using namespace std;

Stack::Stack(int maxSize) : size(maxSize)
{
	pstack = new int[size];
	top = 0;
}

Stack::Stack(const Stack& otherStack) : size(otherStack.getStackSize())
{
	pstack = new int[size];
	top = otherStack.getTop();
	for (int i = 0; i < top; i++)
		pstack[i] = otherStack.pstack[i];
}

Stack::~Stack()
{
	delete[] pstack;
}

void Stack::operator+(const int &element)
{
	pstack[top++] = element;
}

int Stack::operator-(int element)
{
	--top;
	return pstack[top];
}

void Stack::printStack()
{	
	if (operator bool()) //Bool()
	{
		cout << "Стек пустой!\n";
	}
	else
	{
		for (int i = top - 1; i >= 0; i--)
		{
			cout << top - i << setw(4) << pstack[i] << endl;
		}
	}
}

const int &Stack::Peek(int element) const
{
	return pstack[top - element];
}

int Stack::getStackSize() const
{
	return size;
}

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
		for (int j = 0; j < size - 1 ; j++)
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
		ABC_2 + Array[i]; //Operator +
	}
	ABC_2.printStack();
}
