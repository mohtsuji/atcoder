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

	ll	t;
	cin >> t;

	vector<ll> l(t), r(t);
	for (ll i = 0; i<t; i++)
		cin >> l[i] >> r[i];

	for (ll i = 0; i<t; i++)
	{
		ll minC = l[i];
		ll maxC = r[i] - l[i];
		if (minC > maxC)
			cout << 0 << endl;
		else
			cout << (r[i] - 2*l[i] + 1) * (r[i] - 2*l[i] + 2) / 2 << endl;
	}

	

	return 0;
}

/*~~~~~~nyanndane~~~~~*/
