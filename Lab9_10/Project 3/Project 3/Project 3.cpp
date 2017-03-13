// Project 3.cpp: определяет точку входа для консольного приложения.
//	Умные указатели: auto_ptr, shared_ptr, weak_ptr, unique_ptr


#include "stdafx.h"
#include <list>
#include <set>
#include <algorithm>
#include <iostream>
#include <string>
#include <iterator>
#include <cstdlib>
#include "Stack.h"
#include <memory>
using namespace std;

bool sort_up(Stack &left, Stack &right)
{
	return left.getSum_() < right.getSum_();
}

bool sort_down(Stack &left, Stack &right)
{
	return left.getSum_() > right.getSum_();
}

bool pred(Stack& stack) {
	return stack.getSum() > 0;
}

int main()
{
	/*set <Stack> set_one;
	Stack stack;
	int size;
	cout << "Введите количество элементов стека: ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		stack + i;
		
	}
	set_one.insert(stack);
	cout << "Стек: ";
	stack.printStack();
	cout << endl;

	for (auto i = set_one.begin(); i != set_one.end(); ++i)
		(*i).printStack();*/

	setlocale(LC_ALL, "rus");

	string str = "We think in generalities, but we live in details.";
	// (quoting Alfred N. Whitehead)
	string str2 = str.substr(3, 5);
	cout << str2 << ' ' << '\n';

	list<shared_ptr<Stack>> myList;
	myList.push_back(make_shared<Stack>());
	list <Stack> *list_one = new list <Stack>;
	list <Stack> *list_two = new list <Stack>;
	set <int> *set_one = new set <int>;
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

	cout << "Введите количество элементов в одном Stack:" << endl;
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
	myList.push_back(make_shared<Stack>());
	myList.pop_back();

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

	cout << endl << "Stack №1: ";
	stack_one.printStack();
	cout << endl << "Stack №2: ";
	stack_two.printStack();
	cout << endl << "Stack №3: ";
	stack_three.printStack();
	cout << endl << "Stack №4: ";
	stack_four.printStack();
	cout << endl << "Stack №5: ";
	stack_five.printStack();
	cout << endl << endl;
	cout << "Содержимое list:" << endl;
	list <Stack>::iterator p_first = list_one->begin();
	while (p_first != list_one->end())
	{
		(*p_first).getSum();
		cout << endl;
		p_first++;
	}
	cout << endl;

	list_one->sort(sort_down);
	cout << "Сортировка list по убыванию: " << endl;
	p_first = list_one->begin();
	while (p_first != list_one->end())
	{
		(*p_first).getSum();
		cout << endl;
		p_first++;
	}
	auto max = list_one->begin();
	
	auto min = list_one->end();
	
	cout << endl;
	
	/*The second part*/

	int poisk;
	int count = 0;
	cout << "Введите число: ";
	cin >> poisk;
	p_first = list_one->begin();
	
	while (p_first != list_one->end())
	{
		if ((*p_first).getSum_() == poisk) {
			count++;
		}
		p_first++;
	}
	cout << "Элемент " << poisk << " найден ";
	cout << count << " раз." << endl;
	cout << endl;

	/*The third part*/

	p_first = list_one->begin();
	list <Stack>::iterator p_second = list_one->end();
	for (int i = 0; i < list_one->size(); i++)
	{
		set_one->insert(list_one->back().getSum_());
		list_one->push_front(list_one->back());
		list_one->pop_back();
	}
	p_second = find_if(p_first, list_one->end(), pred);
	while (p_first != list_one->end())
	{
		p_second = find_if(p_first, list_one->end(), pred);
		if (p_second != list_one->end())
		{
			set_one->insert(*p_second);
			cout << "вставка" << endl;
		}
		++p_first;
	}
	
	cout << "Вывод элементов set с сортировкой по возрастанию:" << endl;
	for (auto i = set_one->begin(); i != set_one->end(); ++i)
	{
		cout << "Элемент set: ";
		cout << *i << endl;
	}

	list_one->sort(sort_up);
	cout << endl << "Сортировка list по возрастанию:" << endl;
	p_first = list_one->begin();
	while (p_first != list_one->end())
	{
		(*p_first).getSum();
		cout << endl;
		p_first++;
	}
	cout << endl;

    return 0;
}