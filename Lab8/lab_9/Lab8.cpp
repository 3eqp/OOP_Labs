//Класс - стек Stack. Дополнительно перегрузить следующие операции:
//+ - добавить элемент в стек;
//- - извлечь элемент из стека;
//bool() - проверка, пустой ли стек;
//> - копирование одного стека в другой с сортировкой в возрастающем порядке.

#include "stdafx.h"
#include "Stack.h"
#include <iostream>
#include "Triangle.h"
#include "Errors.h"
using namespace std;
const int MAX_TRIANGLE = 10;

template <class T>
int count_of_element(Stack<T> stack, T number)
{
	int count = 0;
	while (!stack)
	{
		if (stack-- > number)
			count++;
	}
	return count;
}

void cls()
{
	cout << "\n\n";
	system("pause");
	system("cls");
}

void OtherWorkWithPointers(int* val)
{
	// фукнция assert оценивает, стоит ли 
	// прекращать выполнение программы
	assert(val != nullptr);
	cout << "I'm working" << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int menu;
	do
	{
		cout << "-----Меню-----" << endl;
		cout << "0. Выход" << endl;
		cout << "1. Класс Stack с int значениями" << endl;
		cout << "2. Класс Stack с double значениями" << endl;
		cout << "3. Класс Stack со значениями типа класс Triangle" << endl;

		cin >> menu;

		try
		{

		switch (menu)
		{

		case 1:
		{
			int kol;
			cout << "Введите количество элементов стека:" << endl;
			cin >> kol;
			Stack <int> MyStack(kol);
			int i = 0;
			int element;
			int element_of_stack;
			MyStack.printStack();
			cout << endl;
			cout << "Введите элементы стека:" << endl;

			while (i++ < kol)
			{
				cin >> element;
				MyStack + element;
			}
			cout << endl;
			MyStack.printStack();



			cout << "Отсортированный стек:" << endl;
			Stack <int> NewStack(kol);
			MyStack > (kol);

			cout << "Введите элемент стека, с которым будем сравнивать другие элементы стека ";
			cin >> element_of_stack;
			cout << "Количество элементов в стеке, больших заданному = " << count_of_element(MyStack, element_of_stack) << endl;
			}

			break;

		case 2:
		{
			int kol;
			cout << "Введите количество элементов стека:" << endl;
			cin >> kol;
			Stack <double> MyStack(kol);
			int i = 0;
			double element;
			double element_of_stack;
			MyStack.printStack();
			cout << endl;
			if (kol == 0) throw IncorrectSize("Количество элементов стека не может быть равно ", kol);
			cout << "Введите элементы стека:" << endl;

			while (i++ < kol)
			{
				cin >> element;
				MyStack + element;
			}
			cout << endl;
			MyStack.printStack();

			cout << "Отсортированный стек:" << endl;
			Stack <double> NewStack(kol);
			MyStack > (kol);

			cout << "Введите элемент стека, с которым будем сравнивать другие элементы стека ";
			cin >> element_of_stack;
			cout << "Количество элементов в стеке, больших заданному = " << count_of_element(MyStack, element_of_stack) << endl;
			break;
		}

		case 3:
		{
			int kol;
			cout << "Введите количество элементов стека:" << endl;
			cin >> kol;
			Triangle element_of_stack;
			Stack <Triangle> MyStack(kol);
			if (kol == 0) throw "Количество элементов стека не может быть равно 0!";
			cout << "Введите элементы стека:" << endl;
			for (int i = 0; i < kol; i++) {
				Triangle a;
				MyStack + a;
			}
			cout << "Отсортированный стек:" << endl;
			MyStack > kol;

			cout << "Элемент стека, с которым мы будем сравнивать другие элементы " << element_of_stack;
			cout << "Количество элементов в стеке, больших заданному = " << count_of_element(MyStack, element_of_stack) << endl;
			break;
		}

		default:
			break;
		}

	}
		catch (IncorrectSize size)
		{
			size.show();
			return 0;
		}
		catch (IncorrectNew message)
		{
			message.show();
			return 0;
		}
		catch (IncorrectIndex message)
		{
			message.show();
			return 0;
		}
		catch (Overflow message)
		{
			message.show();
			return 0;
		}
		catch (IncorrectOutput message)
		{
			message.show();
			return 0;
		}

		cls();
	} while (menu != 0);

	return 0;
}