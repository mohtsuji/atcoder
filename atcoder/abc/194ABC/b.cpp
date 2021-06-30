#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;

int	n;

int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i<n; i++)
		cin >> a[i] >> b[i];

	int	ans = 1001001001;
	int tmp = 0;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j <n; j++)
		{
			if (i == j)
			{
				tmp = a[i] + b[j];
			}
			else
			{
				tmp = max(a[i], b[j]);
			}
			ans = min(ans, tmp);
		}
	}
	cout << ans << endl;
	return 0;
}
