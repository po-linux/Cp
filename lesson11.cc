#include <iostream>

using namespace std;

int main()
{
	float x = 0, y = 0;
	char op = 0;

	cout << "Введите выражение: "; 
	cin >> x >> op >> y;

	switch (op)
	{
		case '+':
		{
			cout << x + y << endl;
			break;
		}
		case '-':
		{
			cout << x - y << endl;
			break;
		}
		case '*':
		{
			cout << x * y << endl;
			break;
		}
		case '/':
		{
			if (y == 0)
				cout << "Деление на 0" << endl;
			else
				cout << x / y << endl;
			break;
		}
		
		default:
			cout << "Неизвестная операция " << endl;
	}	
	return 0;
}

