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

	int	a, b;

	int ans = 0;
	cin >> a >> b;

	if (a + b >= 15 && b >= 8)
		ans = 1;
	else if (a +b >= 10 && b >= 3)
		ans = 2;
	else if (a + b >= 3)
		ans = 3;
	else
		ans = 4;

	cout << ans << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
