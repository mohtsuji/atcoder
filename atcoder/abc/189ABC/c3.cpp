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
	for (int i = 0; i<n; i++)
		cin >> a[i];

	l = 0;
	r = 0;
	int ans = 0;

	while (l < n)
	{
		int	amin = 1000000;
		while (r < n)
		{
			amin = min(a[r], amin);
			int tmp = amin * (r - l + 1);
			ans = max(ans, tmp);
			r++;
		}
		l++;
		r= l;
	}
	cout << ans << endl;
	return (0);
}
