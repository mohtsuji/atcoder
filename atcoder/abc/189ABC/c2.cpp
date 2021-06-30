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
	if (n == 0)
	{
		cout << 0 << endl;
		return (0);
	}
	vector<int> a(n);
	int	fir = 0;
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
		if (fir < a[i])
			fir = a[i];
	}

	x= 0;
	while (1)
	{
		if (n * x <= fir)
			x++;
		else
			break;
	}
	int i = 0;
	ll	ans = 0;
	ll	tmp = 0;
	while (x <= fir)
	{
		while (i<n)
		{
			while (x <= a[i] && i<n)
			{
				tmp = tmp + x;
				i++;
			}
			ans = max(ans, tmp);
			tmp = 0;
			if (i < n)
				i++;
		}
		x++;
		i = 0;
	}


	cout << ans << endl;
	return 0;
}
