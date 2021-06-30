#include <iostream>
#include <string>

using namespace std;

int	main()
{
	int	N, x, count, re, a, b;

	cin >> N;
	count = 0;
		for (int i = 0; i < N; i++)
		{
			count++;
			cin >> x;
			a = 0;
			while ((x % 2) == 0)
			{
				x = x / 2;
				a++;
			}
			if (count == 1)
				re = a;
			else if (a > re)
				re = re;
			else
				re = a;
		}
	cout << re;
}
