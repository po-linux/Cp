#include <iostream>

using namespace std;

int main()
{	
	int x = 0;
	int i = 2;

	cout << "Введите число: ";
	cin >> x;

	if (x == 1)
	{	cout << "Сосать\n";
		return 0;
	} 
	if (x == 2)
	{	cout << "Простое\n";
		return 0;
	} 

	while (i < x)
	{
		if (x % i == 0)
		{	
			cout << "Сосать\n";
			return 0;
		}
		i++;
	}

	cout << "Простое\n";
	return 0;
}
