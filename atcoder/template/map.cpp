//194ABC

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
	vector<int> a(n);
	for (int i = 0; i<n; i++)
		cin >> a[i];
	ll	ans = 0;
	map<int, int> tmp;

	for (int i = 0; i<n; i++)
		tmp[a[i]] += 1;
	auto itr = tmp.begin();

	for (auto& m1: tmp){
		for (auto& m2: tmp){
			if (m1.first >= m2.first) continue;
			ll res = m1.first - m2.first;
			res *= res;
			res = res * m1.second * m2.second;
			ans += res;
		}
	}
	cout << ans << endl;
	return 0;
}
