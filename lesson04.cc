#include <iostream>

using namespace std;

int main()
{ 
	int x = 0, y = 0;

	cout << "x = ";
	cin >> x;
	cout << " y = ";
	cin >> y;

	if (y <= 2 * x - 1 && y >= 1 && y <= 8 - x )
		cout << "\e[32mGot you!\e[0m\n";
	else 
		cout << "\e[31mFuck you!\e[0m\n";
	return 0;
}
