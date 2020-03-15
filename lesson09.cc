#include <iostream>

using namespace std;

int main()
{
	
	int n = 0;
	int m = 0;

	cout << "Введите m и n ";
	cin >> m >> n;
	
	while (n == 0)
	{
		cout << "НЕЛЬЗЯ, введите другое число ";
		cin >> n;
	}

	if (m % n == 0 )
		cout << "Делится\n ";
	else 
		cout << "Не делится\n";
	return 0;
} 
