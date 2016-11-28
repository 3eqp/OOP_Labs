//Класс - стек Stack. Дополнительно перегрузить следующие операции:
//+ - добавить элемент в стек;
//- - извлечь элемент из стека;
//bool() - проверка, пустой ли стек;
//> - копирование одного стека в другой с сортировкой в возрастающем порядке.

#include "stdafx.h"
#include "Stack.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");


	int kol, del;
	cout << "Введите количество элементов массива:" << endl;
	cin >> kol;
	Stack MyStack(kol);
	int i = 0;
	int element;
	MyStack.printStack();
	cout << endl;

	if (kol != 0)
	{
		cout << "Введите элементы стека:" << endl;

		while (i++ < kol)
		{
			cin >> element;
			MyStack + element; //Operator +
		}
		cout << endl;
		MyStack.printStack();

		cout << "Operator -" << endl; //Operator -
		MyStack - element;
		MyStack.printStack();

		Stack NewStack(kol);
		cout << "Operator >" << endl; //Operator >
		MyStack>(kol);
	}
	return 0;
}