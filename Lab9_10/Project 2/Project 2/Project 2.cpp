// Project 2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include "Stack.h"
#include <list>
#include <memory>
using namespace std;

//	����� ���������: auto_ptr, shared_ptr, weak_ptr, unique_ptr

int main()
{
	setlocale(LC_ALL, "rus");
	list <Stack> *list_one = new list <Stack>;
	list <Stack> *list_two = new list <Stack>;
	Stack stack_one;
	Stack stack_two;
	Stack stack_three;
	Stack stack_four;
	Stack stack_five;
	Stack stack_six;
	Stack stack_seven;
	Stack stack_eight;
	Stack stack_nine;
	Stack stack_ten;
	int size;

	/*The first part*/
	list<shared_ptr<Stack>> myList;
	myList.push_back(make_shared<Stack>());

	cout << "������� ���������� ��������� ������:" << endl;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		stack_one + rand() % size;
	}
	list_one->push_back(stack_one);
	myList.push_back(make_shared<Stack>());
	myList.pop_back();

	for (int i = 0; i < size; i++)
	{
		stack_two + rand() % size;

	}
	list_one->push_back(stack_two);

	for (int i = 0; i < size; i++)
	{
		stack_three + rand() % size;

	}
	list_one->push_back(stack_three);

	for (int i = 0; i < size; i++)
	{
		stack_four + rand() % size;

	}
	list_one->push_back(stack_four);

	for (int i = 0; i < size; i++)
	{
		stack_five + rand() % size;

	}
	list_one->push_back(stack_five);

	cout << endl << "���� �1: ";
	stack_one.printStack();
	cout << endl <<"���� �2: ";
	stack_two.printStack();
	cout << endl << "���� �3: ";
	stack_three.printStack();
	cout << endl << "���� �4: ";
	stack_four.printStack();
	cout << endl <<"���� �5: ";
	stack_five.printStack();
	cout << endl;
	cout << "���������� ������� ������:" << endl;
	/*list_one.push_back(stack_one);*/
	list <Stack>::iterator p_first = list_one->begin();
	while (p_first != list_one->end())
	{
		(*p_first).printStack();
		cout << endl;
		p_first++;
	}
	cout << endl;


	cout << "���������� ������ ����� �������� ��������� ���������:" << endl;
	p_first = list_one->begin();
	list <Stack>::iterator p_second = list_one->begin();
	advance(p_second, size / 3);
	list_one->erase(p_first, p_second);
	p_first = list_one->begin();
	while (p_first != list_one->end())
	{
		(*p_first).printStack();
		cout << endl;
		p_first++;
	}
	cout << endl << "������ ������ ����� �������� = " << list_one->size();
	cout << endl << endl << endl;


	cout << "���������� ������ ����� ������� ��������� ���������:" << endl;
	p_first = list_one->begin();
	advance(p_first, list_one->size() / 2);
	list_one->insert(p_first, list_one->size() / 2, stack_one);

	p_first = list_one->begin();
	while (p_first != list_one->end())
	{
		(*p_first).printStack();
		cout << endl;
		p_first++;
	}
	cout << endl << "������ ������ ����� ������� ��������� = " << list_one->size();
	cout << endl << endl << endl;

	/*The second part*/

	size = 0;
	cout << "������� ���������� ��������� ��� ������� ������: ";
	cin >> size;
	
	for (int i = 0; i < size; i++)
	{
		stack_six + rand() % size;

	}
	list_two->push_back(stack_six);


	for (int i = 0; i < size; i++)
	{
		stack_seven + rand() % size;

	}
	list_two->push_back(stack_seven);

	for (int i = 0; i < size; i++)
	{
		stack_eight + rand() % size;

	}
	list_two->push_back(stack_eight);

	for (int i = 0; i < size; i++)
	{
		stack_nine + rand() % size;

	}
	list_two->push_back(stack_nine);

	for (int i = 0; i < size; i++)
	{
		stack_ten + rand() % size;

	}
	list_two->push_back(stack_ten);

	cout << endl << "���� �6: ";
	stack_six.printStack();
	cout << endl << "���� �7: ";
	stack_seven.printStack();
	cout << endl << "���� �8: ";
	stack_eight.printStack();
	cout << endl << "���� �9: ";
	stack_nine.printStack();
	cout << endl << "���� �10: ";
	stack_ten.printStack();
	cout << endl;

	cout << "���������� ������� ������:" << endl;
	/*list_one.push_back(stack_one);*/
	p_first = list_two->begin();
	while (p_first != list_two->end())
	{
		(*p_first).printStack();
		cout << endl;
		p_first++;
	}
	cout << endl;


	int number_of_element;
	int count_of_element;
	cout << "������� ����� ��������, � �������� �� ������ ������� ������� �� ������� ������: ";
	cin >> number_of_element;
	cout << "������� ���������� ���������, ������� �� ������ ������� �� ������� ������: ";
	cin >> count_of_element;
	cout << "���������� ������ ����� �������� ���������:" << endl;
	p_first = list_one->begin();
	p_second = list_one->begin();
	advance(p_first, number_of_element);
	advance(p_second, number_of_element + count_of_element);
	list_one->erase(p_first, p_second);
	p_first = list_one->begin();
	while (p_first != list_one->end())
	{
		(*p_first).printStack();
		cout << endl;
		p_first++;
	}
	cout << endl << endl << endl;
	cout << "������ ����� ������� ���� ��������� �� ������� ������ � ������, ������� � " << number_of_element << " ��������:" << endl;
	p_first = list_one->begin();
	advance(p_first, number_of_element);
	list_one->insert(p_first, list_two->begin(), list_two->end());
	p_first = list_one->begin();
	while (p_first != list_one->end())
	{
		(*p_first).printStack();
		cout << endl;
		p_first++;
	}
	cout << endl << "������ ������ ����� �������� = " << list_one->size();
	cout << endl << endl;
	return 0;
}

 