#include <iostream>
#include <string>

using namespace std;

int	main()
{
  	string	a;
	int		i;
	int	count;

	i = 0;
	count = 0;
  	cin >> a;
	while (a[i] != 0)
	{
		if (a[i] == '1')
			count++;
		i++;
	}
	cout << count << endl;
	return 0;
}
