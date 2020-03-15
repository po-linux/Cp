#include <iostream>

using namespace std;

int main()
{
	long int a = 0;

	cout << "Enter number in [0, 10) U (20; 40]: ";
	cin >> a;
	
	if ((a >= 0 && a < 10) || (a > 20 && a <= 40))
	{
		if (a % 2 == 0)
			cout  << a << " is even\n";
		else
			cout  << a << " is odd\n";
	} else {
		cout << a << " is wrong number\n";
	 }
	return 0;
}
