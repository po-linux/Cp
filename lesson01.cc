#include <iostream>

using namespace std;

// Сумма
int	sum(int a, int b)
{
	return a + b;
}

// Разность
int dif(int a, int b)
{
	return a - b;
}

// Произведение
int mul(int a, int b)
{
	return a * b;
}

// Деление
int dev(int a, int b)
{
	return a / b;
}

// Остаток от деления
int mod(int a, int b)
{
	return a % b;
}

int main()
{
	int a = 0;
	int b = 0;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	string endl = "\n";

	cout << "a + b = " << sum(a, b) << endl;
	cout << "a - b = " << dif(a, b) << endl;
	cout << "a * b = " << mul(a, b) << endl;
	cout << "a / b = " << dev(a, b) << endl;
	cout << "a % b = " << mod(a, b) << endl;

	return 0;
}
