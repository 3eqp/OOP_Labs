//����� - ���� Stack. ������������� ����������� ��������� ��������:
//+ - �������� ������� � ����;
//- - ������� ������� �� �����;
//bool() - ��������, ������ �� ����;
//> - ����������� ������ ����� � ������ � ����������� � ������������ �������.

#include "stdafx.h"
#include "Stack.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");


	int kol, del;
	cout << "������� ���������� ��������� �������:" << endl;
	cin >> kol;
	Stack MyStack(kol);
	int i = 0;
	int element;
	MyStack.printStack();
	cout << endl;

	if (kol != 0)
	{
		cout << "������� �������� �����:" << endl;

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