#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;


int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	string	s, t;
	cin >> s;

	t[0] = '\0';
	int	i, j;
	i = 0;
	while (s[i])
	{
		if (s[i] == 'R')
		{
			reverse(t.begin(), t.end());
		}
		else
		{
			t = t + s[i];
		}
		i++;
	}
	i = 0;
	int	flag;
	while (1)
	{
		flag = 0;
		i = 0;
		string ans;
		ans[0] = '\0';
		while (t[i])
		{
			if (t[i] == t[i + 1])
			{
				flag = 1;
				int j = 0;
				if (ans[j] != '\0')
				{
				while (ans[j + 1])
				{
					t[j] = ans[j];
					j++;
				}
				}
				i = i + 2;
				while (t[i])
				{
					t = t + t[i];
					i++;
				}
				break;
			}
			else
			{
				ans = ans + t[i];
				i++;
			}
		}
		if (flag == 0)
			break;
	}

	cout << t << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
