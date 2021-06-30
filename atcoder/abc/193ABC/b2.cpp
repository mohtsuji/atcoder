#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;

int	a, p, x, n;

int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	cin >> n;
	vector<int> a(n), p(n), x(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> p[i] >> x[i];
	}

	int	ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < x[i])
		{
			if (ans == 0)
				ans = p[i];
			else
				ans = min(ans, p[i]);
		}
	}

	if (ans == 0)
	{
		cout << -1 << endl;
		return 0;
	}
	cout << ans;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
