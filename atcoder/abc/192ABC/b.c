#include <iostream>
#include <string>
#include <vector>

using namespace std;

int	main()
{
	string	s;
	int	flag = 0;

	cin >> s;
	for (int i = 0; s[i] != 0; i++)
	{
		if (i == 0)
		{
			if ('a' <= s[i] && s[i] <= 'z')
				continue ;
			else
			{
				flag = 1;
				break;
			}
		}
		if (i % 2 == 0)
		{
			if ('a' <= s[i] && s[i] <= 'z')
				continue ;
			else
			{
				flag = 1;
				break;
			}
		}
		if (i % 2 == 1)
		{
			if ('A' <= s[i] && s[i] <= 'Z')
				continue ;
			else
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1)
		cout << No;
	else
		cout << Yes;
	return 0;
}
