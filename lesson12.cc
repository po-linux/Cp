#include <iostream>

using namespace std;

int main()
{
	int k = 0;

	cout << "Enter numbers ";

	cin >> k;
	while (k != 0)
	{
		cout << k*k << endl;
		cin >> k;
	}

/*
	do {
		cin >> k;
		cout << k*k << endl;
	} while (k != 0);
*/

	return 0;
}




