// Project 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Stack.h"
#include <list>
#include <memory>
using namespace std;

//	Умные указатели: auto_ptr, shared_ptr, weak_ptr, unique_ptr

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

	cout << "Введите количество элементов списка:" << endl;
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

	cout << endl << "Стек №1: ";
	stack_one.printStack();
	cout << endl <<"Стек №2: ";
	stack_two.printStack();
	cout << endl << "Стек №3: ";
	stack_three.printStack();
	cout << endl << "Стек №4: ";
	stack_four.printStack();
	cout << endl <<"Стек №5: ";
	stack_five.printStack();
	cout << endl;
	cout << "Содержимое первого списка:" << endl;
	/*list_one.push_back(stack_one);*/
	list <Stack>::iterator p_first = list_one->begin();
	while (p_first != list_one->end())
	{
		(*p_first).printStack();
		cout << endl;
		p_first++;
	}
	cout << endl;


	cout << "Содержимое списка после удаления некоторых элементов:" << endl;
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
	cout << endl << "Размер списка после удаления = " << list_one->size();
	cout << endl << endl << endl;


	cout << "Содержимое списка после вставки некоторых элементов:" << endl;
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
	cout << endl << "Размер списка после вставки элементов = " << list_one->size();
	cout << endl << endl << endl;

	/*The second part*/

	size = 0;
	cout << "Введите количество элементов для второго списка: ";
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

	cout << endl << "Стек №6: ";
	stack_six.printStack();
	cout << endl << "Стек №7: ";
	stack_seven.printStack();
	cout << endl << "Стек №8: ";
	stack_eight.printStack();
	cout << endl << "Стек №9: ";
	stack_nine.printStack();
	cout << endl << "Стек №10: ";
	stack_ten.printStack();
	cout << endl;

	cout << "Содержимое второго списка:" << endl;
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
	cout << "Введите номер элемента, с которого вы хотите удалить элемент из первого списка: ";
	cin >> number_of_element;
	cout << "Введите количество элементов, которые вы хотите удалить из первого списка: ";
	cin >> count_of_element;
	cout << "Содержимое списка после удаления элементов:" << endl;
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
	cout << "Список после вставки всех элементов из второго списка в первый, начиная с " << number_of_element << " элемента:" << endl;
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
	cout << endl << "Размер списка после удаления = " << list_one->size();
	cout << endl << endl;
	return 0;
}

 