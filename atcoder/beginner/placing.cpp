#include <iostream>
#include <string>

using namespace std;

int	main()
{
	string	s;
	int	i, count;

	cin >> s;
	i = 0;
	count = 0;
	cout >> s >> endl;
	while (i < 3)
	{
		if (s.at(i) == '1')
			count++;
		i++;
	}
	cout << count;
}
