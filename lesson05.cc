#include <iostream>

using namespace std;

int main()
{
	int k, max;

	cout << "Enter numbers ";
	cin >> k;
	max = k;
	
	while (k != 0) 
	{
		cin >> k;
		if (k > max)
			max = k;
	}

/*
	int n, max, k;
	
	cout << "Введите количество чисел : ";
	cin >> n;

	cout << "Введите числa : ";
	cin >> k;
	max = k;

	for (int i = 0; i < n - 1; i++)
	{
		cin >> k;
		if (k > max)
			max = k;
	}	

*/
	
	cout << "max = " << max << endl;
	return 0;
}
