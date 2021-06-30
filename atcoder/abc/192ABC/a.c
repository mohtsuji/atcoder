#include <iostream>
#include <string>
#include <vector>

using namespace std;

int	main()
{
	int	size = 0;
	int	s, re;

	cin >> s;

	size = s % 100;
	re = 100 - size;

	cout << re;
	return 0;
}
