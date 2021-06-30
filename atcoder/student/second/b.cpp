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

	int	n, m;

	cin >> n >> m;
	vector<int> a(n);
	vector<int> b(m);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < m; i++){
		cin >> b[i];
	}

	map<int, int>	ans;

	for (int i = 0; i < n; i++){
		ans[a[i]] = 1;
	}
	for (int i = 0; i < m; i++){
		if (ans[b[i]] == 1)
			ans[b[i]] = 0;
		else
			ans[b[i]] = 1;
	}

	for (auto itr = ans.begin(); itr != ans.end(); itr++){
		if (itr->second == 1)
			cout << itr->first << " ";
	}

	cout << endl;;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
