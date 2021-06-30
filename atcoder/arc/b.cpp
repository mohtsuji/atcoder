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
	vector<ll>	a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	ll	ans = 0;

	for (int bit = 0; bit < (1 << n); bit++){
		ll ma = 0;
		ll mi = 1001001001001001001;
		for (int i = 0; i < n; i++){
			if (bit & (1 << i)){
				ma = max(a[i], ma);
				mi = min(a[i], mi);
			}
		}
		ans = ans + (mi * ma);
	}

	cout << (ans % 998244353) << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
