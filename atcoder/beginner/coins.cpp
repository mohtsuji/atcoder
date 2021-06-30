#include <iostream>
#include <string>

using namespace std;

int	main()
{
	int	a = 0;
	int	b = 0;
	int	c = 0;
	int	x = 0;
	int	count = 0;
	int	re = 0;
	int	tmp;

	cin >> a >> b >> c >> x;

/*	500 == 100 * 5

	500 == 50 * 10
	100 == 50 * 2*/
	if (x == 0)
	{
		cout << 0;
		return 0;
	}
	int i = 0;
	int j = 0;
	int k = 0;
	while (i <= a)
	{
		while (j <= b)
		{
			while (k <= c)
			{
				if ((i * 500 + j * 100 + k * 50) == x)
				{
					count++;
					break;
				}
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
	cout << count;
}


