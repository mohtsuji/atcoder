#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;

int	henkan(int i)
{
	int	ans = 0;
	int	j = 0;
	int	n = 1;

	while(i != 0)
	{
		j = i % 8;
		i = i / 8;
		n = n * 10;
		henkan(i);
		ans = ans + (j * n);
	}
	return (ans / 10);
}


int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	int	n;

	cin >> n;

	set<int> tmp;
	for (int i = 1; i <= n; i++)
	{
		int j = i;
		while (j != 0)
		{
			if (j % 10 == 7)
			{
				tmp.insert(i);
				break;
			}
			j = j / 10;
		}
		j = henkan(i);
		while (j != 0)
		{
			if (j % 10 == 7)
			{
				tmp.insert(i);
				break;
			}
			j = j / 10;
		}
	}
	int	ans = n - tmp.size();

	cout << ans << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
