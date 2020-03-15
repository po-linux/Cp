#include <iostream>

using namespace std;

int main()
{
	float x = 0, y = 0;
	char op = 0;

	cout << "Введите выражение: "; 
	cin >> x >> op >> y;
	
	if (op == '+')
		cout << x + y << endl;
	else if (op == '-')
		cout << x - y << endl;
	else if (op == '*')
		cout << x * y << endl;
	else if (op == '/')
	{
		if (y == 0)
			cout << "Деление на 0" << endl;
		else
			cout << x / y << endl;
	}
	else
		cout << "Неизвестная операция";
	return 0;
}
