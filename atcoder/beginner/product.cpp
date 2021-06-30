#include <iostream>
#include <string>

using namespace std;

int	main()
{
	int	a, b;
	int	re;

	cin >> a >> b;
	re = a * b;
	if ((re % 2) == 0)
		cout << "Even";
	else
		cout << "Odd";
}
