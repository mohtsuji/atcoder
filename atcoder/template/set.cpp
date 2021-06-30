//193ABC

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

	ll	n;
	set<ll> s;

	cin >> n;
	for (ll a = 2; a*a <= n; a++)
	{
		ll x = a * a;
		while (x <= n)
		{
			s.insert(x);
			x = x * a;
		}
	}

	cout << n - s.size() << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
