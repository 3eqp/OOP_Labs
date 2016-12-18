//����� - ���� Stack. ������������� ����������� ��������� ��������:
//+ - �������� ������� � ����;
//- - ������� ������� �� �����;
//bool() - ��������, ������ �� ����;
//> - ����������� ������ ����� � ������ � ����������� � ������������ �������.
#pragma once
# define SIZE 100

class Stack
{
private:

	const int size;					// ������������ ���������� ��������� � �����
	int sum;
public:
	Stack(int = 100);				// �� ��������� ������ ����� ����� 10 ���������
	Stack(const Stack&);			// ����������� �����������
	~Stack();						// ����������
	int top;						// ����� �������� �������� �����
	int *pstack;					// ��������� �� ����
	void operator+(const int&);		// ��������� ������� � ������� �����
	int operator-(int);				// ������� ������� �� ������� ����� � ������� ���
	void printStack() const;				// ����� ����� �� �����
	const int &Peek(int) const;		// n-� ������� �� ������� �����
	int getStackSize() const;		// �������� ������ �����
									/*int *getP() const;*/			// �������� ��������� �� ����
	int getTop() const;				// �������� ����� �������� �������� � �����
	operator bool();				// �������� ����� �� �������
	void operator>(int);			// ����������� ������ ����� � ������ � ����������� � ������������ �������
	int getSum();
	int getSum_();
	friend bool operator < (const Stack left, const Stack right) {
		return left.top < right.top;
	}

	//friend istream & operator>>(istream &, Stack &);
	//friend ostream & operator<<(ostream &, Stack &);
};