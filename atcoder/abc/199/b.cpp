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

	vector<int> a(n), b(n);
	for (int i = 0; i <n; i++){
		cin >> a[i];
	}
	for (int i = 0; i <n; i++){
		cin >> b[i];
	}

	int	amax = 0;
	int	bmin = 1111111;
	for (int i = 0; i <n; i++){
		amax = max(amax, a[i]);
	}
	for (int i = 0; i <n; i++){
		bmin = min(bmin, b[i]);
	}

	int	ans = bmin - amax + 1;
	if (ans < 0)
		ans = 0;
	cout << ans << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
