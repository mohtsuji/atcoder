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
	vector<ll> n(t);
	for (int i = 0; i < t; i++){
		cin >> n[i];
	}

	for (int i =0; i < t; i++){
	if (n[i] % 4 == 1 || n[i] % 4 == 3)
		cout << "Odd" << endl;
	else if (n[i] % 4 == 2)
		cout << "Same" << endl;
	else
		cout << "Even" << endl;
	}
	return (0);
}
