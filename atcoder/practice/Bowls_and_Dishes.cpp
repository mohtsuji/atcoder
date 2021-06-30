#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;

int	n, m, k;

int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	cin >> n >> m;
	vector<int> a(m), b(m);
	for (int i=0; i<m; i++)
		cin >> a[i] >> b[i];
	cin >> k;
	vector<int> c(k), d(k);
	for (int i=0; i<k; i++)
		cin >> c[i] >> d[i];

	int	ans = 0;
	int	k2 = 1 << k;
	for(int s=0; s<k2; s++){
		vector<int> dish(n+1);
		for(int i=0; i<k; i++){
			if (s>>i&1) dish[d[i]]++;
			else dish[c[i]]++;
		}
		int	now = 0;
		for(int i=0; i<m; i++){
			if (dish[a[i]] == 0) continue;
			if (dish[b[i]] == 0) continue;
			now++;
		}
		ans = max(ans, now);
	}
	cout << ans << endl;

	return (0);
}
