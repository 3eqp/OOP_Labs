# include <iostream>
using namespace std;

//����������� ��� ����������
class AB
{
private:
	int a;
	int b;
public:
	AB() {	//����������� 
		a = 0;
		b = 0;
		cout << "������ ������������ ��� �������� ������ �������: " << endl;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl << endl;
	}

	void setAB() {
		cout << "������� ����� ����� �: ";
		cin >> a;
		cout << "������� ����� ����� b: ";
		cin >> b;
	}

	void getAB() {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl << endl;
	}

	~AB() {	//����������
		cout << "��� �������� ����������" << endl;
	}
};

//����������� c �����������
class CD
{
private:
	int a;
	int b;
public:
	CD(int A, int B) {	//����������� 
		a = A;
		b = B;
		cout << "������ ������������ ��� �������� ������ �������: " << endl;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl << endl;
	}

	void setCD() {
		cout << "������� ����� ����� �: ";
		cin >> a;
		cout << "������� ����� ����� b: ";
		cin >> b;
	}

	void getCD() {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl << endl;
	}

	~CD() {	//����������
		cout << "��� �������� ����������" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "rus");

	cout << "����������� ��� ����������:" << endl;
	AB obj1;
	obj1.setAB();
	obj1.getAB();

	cout << "����������� � �����������:" << endl;
	CD obj2(100, 100);
	obj2.setCD();
	obj2.getCD();

	return 0;
}