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
	int top;						// ����� �������� �������� �����
	int sum;
public:
	Stack(int = 100);				// �� ��������� ������ ����� ����� 10 ���������
	Stack(const Stack&);			// ����������� �����������
	~Stack();						// ����������
int *pstack;					// ��������� �� ����
	void operator+(const int&);		// ��������� ������� � ������� �����
	int operator-(int);				// ������� ������� �� ������� ����� � ������� ���
	void printStack();				// ����� ����� �� �����
	const int &Peek(int) const;		// n-� ������� �� ������� �����
	int getStackSize() const;		// �������� ������ �����
	/*int *getP() const;*/			// �������� ��������� �� ����
	int getTop() const;				// �������� ����� �������� �������� � �����
	operator bool();				// �������� ����� �� �������
	void operator>(int);			// ����������� ������ ����� � ������ � ����������� � ������������ �������
	int getSum();
	//friend istream & operator>>(istream &, Stack &);
	//friend ostream & operator<<(ostream &, Stack &);
};