//Класс - стек Stack. Дополнительно перегрузить следующие операции:
//+ - добавить элемент в стек;
//- - извлечь элемент из стека;
//bool() - проверка, пустой ли стек;
//> - копирование одного стека в другой с сортировкой в возрастающем порядке.
#pragma once
# define SIZE 100

class Stack
{
private:

	const int size;					// максимальное количество элементов в стеке
	int sum;
public:
	Stack(int = 100);				// по умолчанию размер стека равен 10 элементам
	Stack(const Stack&);			// конструктор копирования
	~Stack();						// деструктор
	int top;						// номер текущего элемента стека
	int *pstack;					// указатель на стек
	void operator+(const int&);		// поместить элемент в вершину стека
	int operator-(int);				// удалить элемент из вершины стека и вернуть его
	void printStack() const;				// вывод стека на экран
	const int &Peek(int) const;		// n-й элемент от вершины стека
	int getStackSize() const;		// получить размер стека
									/*int *getP() const;*/			// получить указатель на стек
	int getTop() const;				// получить номер текущего элемента в стеке
	operator bool();				// проверка стека на пустоту
	void operator>(int);			// копирование одного стека в другой с сортировкой в возрастающем порядке
	int getSum();
	int getSum_();
	friend bool operator < (const Stack left, const Stack right) {
		return left.top < right.top;
	}

	//friend istream & operator>>(istream &, Stack &);
	//friend ostream & operator<<(ostream &, Stack &);
};