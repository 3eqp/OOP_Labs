#include "stdafx.h"
#include "Stack.h"
#include <iostream>
#include "Triangle.h"
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

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "ru");
	int menu;
	do
	{
		cout << "-----Меню-----" << endl;
		cout << "0. Выход" << endl;
		cout << "1. Класс Stack с int значениями" << endl;
		cout << "2. Класс Stack с double значениями" << endl;
		cout << "3. Класс Stack со значениями типа класс Triangle" << endl;

		cin >> menu;

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

			if (kol != 0)
			{
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
		}

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

			if (kol != 0)
			{
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
				MyStack>(kol);

				cout << "Введите элемент стека, с которым будем сравнивать другие элементы стека ";
				cin >> element_of_stack;
				cout << "Количество элементов в стеке, больших заданному = " << count_of_element(MyStack, element_of_stack) << endl;
			}
			break;
		}

		case 3:
		{
			int kol;
			cout << "Введите количество элементов стека:" << endl;
			cin >> kol;
			Triangle element_of_stack;
			Stack <Triangle> MyStack(kol);
			for (int i = 0; i < kol; i++) {
				Triangle a;
				MyStack + a;
			}
			cout << "Введите элементы стека:" << endl;
			MyStack > kol;

			cout << "Элемент стека, с которым мы будем сравнивать другие элементы " << element_of_stack;
			cout << "Количество элементов в стеке, больших заданному = " << count_of_element(MyStack, element_of_stack) << endl;

			/*Stack<Triangle> my_stack;
			Triangle MyTriangle[3];
			int *Array = new int[3];
			for (int i = 0; i < 3; i++)
			{
			my_stack + MyTriangle[i];
			}
			my_stack.printStack();

			Stack<Triangle> new_stack;
			for (int i = 0; i < 3; i++)
			{
			Array[i] = (int)MyTriangle[i];
			new_stack + Array[i];
			cout << Array[i] << " ";
			}
			new_stack > Array;


			cout << endl;
			new_stack.printStack();*/
			break;
		}

		default:
			break;
		}

		cls();
	} while (menu != 0);

	return 0;
}