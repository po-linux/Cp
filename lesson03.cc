#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int mn, mx;

	cout << "Enter 3 numbers\n";
	cin >> a >> b >> c;
	
	if (a > b && a > c)
	{
		mx = a;
		if (b < c)
			mn = b; 
		else
			mn = c;
	}
	else
	{
		if (b > c )
		{
			mx = b;
			if (a < c)
				mn = a;
			else
				mn = c;
		}
		else
		{
			mx = c;
			if (a < b )
				mn = a;
			else
				mn = b;
		}
	}


	cout << "\e[31mhui na\n\e[32m";
	cout << mn << " \e[33m" << a + b + c - mn - mx << " \e[34m" << mx << "\e[35m\n";
	return 0;
}	 
