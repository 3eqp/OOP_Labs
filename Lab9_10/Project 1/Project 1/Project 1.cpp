// Project 1.cpp: определяет точку входа для консольного приложения.
// About list: http://www.cplusplus.com/reference/list/list/

#include "stdafx.h"
#include <iostream>
#include <list>
using namespace std;

//	Итератор — структура данных, которая «указывает» на некоторый элемент контейнера, 
//	и (для некоторых контейнеров) умеет переходить к предыдущему/следующему элементу.

int main()
{
	setlocale(LC_ALL, "rus");
	list <int> list_one; // 1
	list <int> list_two;
	int size;
	cout << "Введите количество элементов списка: ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		list_one.push_back(rand() % size); // Add element at the end
	}
	cout << "Содержимое списка:" << endl;;
	list <int>::iterator p_first = list_one.begin(); // Returns an iterator pointing to the first element in the list container
	while (p_first != list_one.end()) // Return iterator to end 
	{
		cout << *p_first << " ";
		p_first++;
	}
	cout << endl << endl;


	cout << "Содержимое списка после удаления некоторых элементов:" << endl;
	p_first = list_one.begin();
	list <int>::iterator p_second = list_one.begin();
	advance(p_second, size / 3);
	list_one.erase(p_first, p_second); // Erase elements 
	p_first = list_one.begin();
	while (p_first != list_one.end())
	{
		cout << *p_first << " ";
		p_first++;
	}
	cout << endl << "Размер списка после удаления = " << list_one.size();
	cout << endl << endl << endl;
	


	cout << "Содержимое списка после вставки некоторых элементов:" << endl;
	p_first = list_one.begin();
	advance(p_first, list_one.size() / 2);
	list_one.insert(p_first, list_one.size() / 2, 0); // Insert elements

	p_first = list_one.begin();
	while (p_first != list_one.end())
	{
		cout << *p_first << " ";
		p_first++;
	}
	cout << endl << "Размер списка после вставки элементов = " << list_one.size();
	cout << endl << endl << endl;

	cout << "Введите количество элементов для второго списка: ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		list_two.push_front(rand() % size); // Insert element at beginning 
	}
	cout << "Содержимое второго списка:" << endl;;
	p_first = list_two.begin();
	while (p_first != list_two.end())
	{
		cout << *p_first << " ";
		p_first++;
	}
	cout << endl << endl << endl;


	int number_of_element;
	int count_of_element;
	cout << "Введите номер элемента, с которого вы хотите удалить элемент из первого списка: ";
	cin >> number_of_element;
	cout << "Введите количество элементов, которые вы хотите удалить из первого списка: ";
	cin >> count_of_element;
	cout << "Содержимое списка после удаления элементов:" << endl;
	p_first = list_one.begin();
	p_second = list_one.begin();
	advance(p_first, number_of_element);
	advance(p_second, number_of_element + count_of_element);
	list_one.erase(p_first, p_second);
	p_first = list_one.begin();
	while (p_first != list_one.end())
	{
		cout << *p_first << " ";
		p_first++;
	}
	cout << endl << endl << endl;
	cout << "Список после вставки всех элементов из второго списка в первый, начиная с " << number_of_element << " элемента:" << endl;
	p_first = list_one.begin();
	advance(p_first, number_of_element);
	list_one.splice(p_first, list_two, list_two.begin(), list_two.end()); // Transfer elements from list to list 
	p_first = list_one.begin();
	while (p_first != list_one.end())
	{
		cout << *p_first << " ";
		p_first++;
	}
	cout << endl << "Размер списка после удаления = " << list_one.size();
	cout << endl << endl;
	return 0;
}

