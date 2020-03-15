#include <iostream>

using namespace std;

int main()
{
	int year = 0;

	cout << "Enter year: ";
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		cout << "\e[32mYear is leap\e[0m\n";
	else 
		cout << "\e[31mIs not leap\e[0m\n";
	return 0;
}


