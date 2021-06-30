#include <bits/stdc++.h>
using namespace std;

int	main()
{
	string	s;

	cin >> s;
	int	len = s.size();
	bool	flag = true;
	for (int i = 0; i < len ; i++)
	{
		if (i % 2 == 0)
			if (!islower(s[i]))flag = false;
		else
			if (!isupper(s[i]))flag = false;
	}
	if (flag)cout << "Yes";
	else cout << "No";
	return (0);
}
