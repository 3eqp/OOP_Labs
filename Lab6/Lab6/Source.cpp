/*Класс - стек Stack. Дополнительно перегрузить следующие операции: 
+ - добавить элемент в стек; 
-- - извлечь элемент из стека; 
bool() - проверка, пустой ли стек;
> - копирование одного стека в другой с сортировкой в возрастающем порядке.*/

#include <iostream>
#include <conio.h>

using namespace std;

struct stackElement {
	int data;
	stackElement *prev;
};

class stack
{
public:
	stack(void);//готово
	~stack(void);//готово
	stack& operator+(stack &);
	stack& operator=(const stack &);
	stack operator()(int n);
	friend bool operator==(stack &, stack &);
	friend bool operator!=(stack &, stack &);
	friend bool operator<(stack &, stack &);
	friend bool operator>(stack &, stack &);
	friend ostream& operator<<(ostream &, const stack &);
	friend istream& operator >> (istream &, const stack &);
	void norm_size(int norm);//готово
	void push(int i);//готово
	int pop();//готово
	int back();//готово
	void clear();//готово
	void show_first();
private:
	stackElement *head_;
	int count;
	stackElement *abyss;
};

stack::stack(void)
{
	head_ = new stackElement;
	head_->prev = NULL;
	count = 0;
}

stack::~stack(void)
{
	while (head_ != NULL) {
		stackElement *tmp = head_;
		head_ = head_->prev;
		delete tmp;
	}
}

void stack::push(int i) {
	stackElement *tmp = new stackElement;
	tmp->data = i;
	tmp->prev = head_;
	head_ = tmp;
	if (count == 0)
	{
		head_->prev = NULL;
		abyss = tmp;
	}
	count++;
}

int stack::pop() {
	int data = head_->data;
	stackElement *tmp = head_;
	head_ = head_->prev;
	delete tmp;
	count--;
	return data;
}

int stack::back() {
	return count;
}

void stack::norm_size(int norm) {
	while (count != norm) {
		pop();
	}
}

void stack::clear() {
	norm_size(0);
}

void stack::show_first() {
	cout << abyss->data << endl;
}

stack& stack::operator=(const stack &s) {
	clear();
	stackElement* one = s.head_;
	while (one != NULL)
	{
		push(one->data);
		one = one->prev;
	}
	return *this;
}

int main()
{
	stack s1;
	stack s2, s3;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.show_first();
	cout << s1.back() << endl;
	s2.push(4);
	s2.push(5);
	s2.push(6);
	s2.show_first();
	s1 = s2;
	cout << s2.back() << endl;
	s1.show_first();
	cout << s1.back() << endl;
	s1.~stack();
	s2.~stack();
	system("pause");
	return 0;
}