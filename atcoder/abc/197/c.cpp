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

	int	n;

	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++){
		cin >> a.at(i);
	}

	ll	ans = 1001001001001001001;

	for (int bit = 0; bit < (1 << (n - 1)); bit++){
		ll	b1 = a[0];
		ll	b2 = 0;
		for (int i = 1; i < n; i++){
			if (bit & (1 << (i - 1))){
				b2 = b1 ^ b2;
				b1 = 0;
			}
			b1 = (b1 | a[i]);
		}
		b2 = b1 ^ b2;
		ans = min(ans, b2);
	}
	cout << ans << endl;
	return (0);
}
