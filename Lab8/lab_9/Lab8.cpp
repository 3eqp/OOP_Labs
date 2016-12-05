//����� - ���� Stack. ������������� ����������� ��������� ��������:
//+ - �������� ������� � ����;
//- - ������� ������� �� �����;
//bool() - ��������, ������ �� ����;
//> - ����������� ������ ����� � ������ � ����������� � ������������ �������.

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
	// ������� assert ���������, ����� �� 
	// ���������� ���������� ���������
	assert(val != nullptr);
	cout << "I'm working" << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int menu;
	do
	{
		cout << "-----����-----" << endl;
		cout << "0. �����" << endl;
		cout << "1. ����� Stack � int ����������" << endl;
		cout << "2. ����� Stack � double ����������" << endl;
		cout << "3. ����� Stack �� ���������� ���� ����� Triangle" << endl;

		cin >> menu;

		try
		{

		switch (menu)
		{

		case 1:
		{
			int kol;
			cout << "������� ���������� ��������� �����:" << endl;
			cin >> kol;
			Stack <int> MyStack(kol);
			int i = 0;
			int element;
			int element_of_stack;
			MyStack.printStack();
			cout << endl;
			cout << "������� �������� �����:" << endl;

			while (i++ < kol)
			{
				cin >> element;
				MyStack + element;
			}
			cout << endl;
			MyStack.printStack();



			cout << "��������������� ����:" << endl;
			Stack <int> NewStack(kol);
			MyStack > (kol);

			cout << "������� ������� �����, � ������� ����� ���������� ������ �������� ����� ";
			cin >> element_of_stack;
			cout << "���������� ��������� � �����, ������� ��������� = " << count_of_element(MyStack, element_of_stack) << endl;
			}

			break;

		case 2:
		{
			int kol;
			cout << "������� ���������� ��������� �����:" << endl;
			cin >> kol;
			Stack <double> MyStack(kol);
			int i = 0;
			double element;
			double element_of_stack;
			MyStack.printStack();
			cout << endl;
			if (kol == 0) throw IncorrectSize("���������� ��������� ����� �� ����� ���� ����� ", kol);
			cout << "������� �������� �����:" << endl;

			while (i++ < kol)
			{
				cin >> element;
				MyStack + element;
			}
			cout << endl;
			MyStack.printStack();

			cout << "��������������� ����:" << endl;
			Stack <double> NewStack(kol);
			MyStack > (kol);

			cout << "������� ������� �����, � ������� ����� ���������� ������ �������� ����� ";
			cin >> element_of_stack;
			cout << "���������� ��������� � �����, ������� ��������� = " << count_of_element(MyStack, element_of_stack) << endl;
			break;
		}

		case 3:
		{
			int kol;
			cout << "������� ���������� ��������� �����:" << endl;
			cin >> kol;
			Triangle element_of_stack;
			Stack <Triangle> MyStack(kol);
			if (kol == 0) throw "���������� ��������� ����� �� ����� ���� ����� 0!";
			cout << "������� �������� �����:" << endl;
			for (int i = 0; i < kol; i++) {
				Triangle a;
				MyStack + a;
			}
			cout << "��������������� ����:" << endl;
			MyStack > kol;

			cout << "������� �����, � ������� �� ����� ���������� ������ �������� " << element_of_stack;
			cout << "���������� ��������� � �����, ������� ��������� = " << count_of_element(MyStack, element_of_stack) << endl;
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