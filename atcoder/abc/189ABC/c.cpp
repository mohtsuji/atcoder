#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;

int	n, l, r, x;

int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	cin >> n;
	vector<int> a(n);
	x = 0;
	int	sec = 0;;
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
		if (x < a[i])
		{
			x = a[i];
			sec = fir;
		}
	}
	int i = 0;
	ll	ans = 0;
	ll	tmp = 0;
	int flag = 0;
	while (i<n)
	{
		while (1)
		{
			while (x <= a[i] && i<n)
			{
				tmp = tmp + x;
				i++;
			}
			if (flag == 1)
			{
				ans = max(ans, tmp);
			}
			tmp = 0;
			x = sec;
			if (i < n)
				i++;
		}
	}


	cout << ans << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
