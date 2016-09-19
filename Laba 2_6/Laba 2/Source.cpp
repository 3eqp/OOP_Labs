# include <iostream>
using namespace std;

//конструктор без параметров
class AB
{
private:
	int a;
	int b;
public:
	AB() {	//конструктор 
		a = 0;
		b = 0;
		cout << "Работа конструктора при создании нового объекта: " << endl;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl << endl;
	}

	void setAB() {
		cout << "Введите целое число а: ";
		cin >> a;
		cout << "Введите целое число b: ";
		cin >> b;
	}

	void getAB() {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl << endl;
	}

	~AB() {	//деструктор
		cout << "Тут сработал деструктор" << endl;
	}
};

//конструктор c параметрами
class CD
{
private:
	int a;
	int b;
public:
	CD(int A, int B) {	//конструктор 
		a = A;
		b = B;
		cout << "Работа конструктора при создании нового объекта: " << endl;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl << endl;
	}

	void setCD() {
		cout << "Введите целое число а: ";
		cin >> a;
		cout << "Введите целое число b: ";
		cin >> b;
	}

	void getCD() {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl << endl;
	}

	~CD() {	//деструктор
		cout << "Тут сработал деструктор" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Конструктор без параметров:" << endl;
	AB obj1;
	obj1.setAB();
	obj1.getAB();

	cout << "Конструктор с параметрами:" << endl;
	CD obj2(100, 100);
	obj2.setCD();
	obj2.getCD();

	return 0;
}