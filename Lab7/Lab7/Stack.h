//Класс - стек Stack. Дополнительно перегрузить следующие операции:
//+ - добавить элемент в стек;
//- - извлечь элемент из стека;
//bool() - проверка, пустой ли стек;
//> - копирование одного стека в другой с сортировкой в возрастающем порядке.

#include <cassert>
#include <iomanip>
#pragma once
# define SIZE 20
using namespace std;

template <class T>
class Stack
{
private:
	T *pstack;						// указатель на стек
	const int size;					// максимальное количество элементов в стеке
	int top;						// номер текущего элемента стека
public:
	Stack(int = 20);				// по умолчанию размер стека равен 10 элементам
	Stack(const Stack<T> &);		// конструктор копирования
	~Stack();						// деструктор

	void operator+(const T &);		// поместить элемент в вершину стека
	T operator--(int);				// удалить элемент из вершины стека и вернуть его
	void printStack();				// вывод стека на экран
	const T &Peek(int) const;		// n-й элемент от вершины стека
	int getStackSize() const;		// получить размер стека
	int getTop() const;				// получить номер текущего элемента в стеке
	operator bool();				// проверка стека на пустоту
	void operator>(int);			// копирование одного стека в другой с сортировкой в возрастающем порядке
};

template <class T>
Stack<T>::Stack(int maxSize) : size(maxSize) //инициализация константы
{
	pstack = new T[size];
	top = 0;
}

template <class T>
Stack<T>::Stack(const Stack<T> & otherStack) : size(otherStack.getStackSize())
{
	cout << "\nСработал конструктор копирования!\n";
	pstack = new T[size]; // выделение памяти под новый стек
	top = otherStack.getTop();
	for (int i = 0; i < top; i++)
		pstack[i] = otherStack.pstack[i];
}

template <class T>
Stack<T>::~Stack()
{
	delete[] pstack;
}

template <class T>
void Stack<T>::operator + (const T &element)
{
	assert(top < size);
	pstack[top++] = element;
}

template <class T>
T Stack<T>::operator -- (int element)
{
	assert(top > 0);
	--top;
	return pstack[top];
}

template <class T>
void Stack<T>::printStack()
{
	if (operator bool())
	{
		cout << "Стек пуст!\n";
	}
	else
	{
		for (int i = top - 1; i >= 0; i--)
		{
			cout << top - i << setw(4) << pstack[i] << endl;
		}
	}
}

template <class T>
const T &Stack<T>::Peek(int element) const
{
	assert(element <= top);
	return pstack[top - element];
}

template <class T>
int Stack<T>::getStackSize() const
{
	return size;
}

template <class T>
int Stack<T>::getTop() const
{
	return top;
}

template <class T>
Stack<T>::operator bool()
{
	return !top;
}

template <class T>
void Stack<T>::operator>(int size)
{
	Stack<T> ABC_2;
	T *Array = new T[size];
	int Add_Array = 0;

	for (int i = 0; i < size; i++)
	{
		Array[i] = this->Peek(top - i);
	}

	/*for (int i = 0; i < size; i++)
	cout << Array[i] << " ";
	cout << endl << endl;*/

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

	/*for (int i = 0; i < size; i++)
	cout << Array[i] << " ";
	cout << endl;*/

	for (int i = 0; i < size; i++)
	{
		ABC_2 + Array[i];
	}
	ABC_2.printStack();
}