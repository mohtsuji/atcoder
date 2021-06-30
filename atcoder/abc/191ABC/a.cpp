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

	double v, t, s, d;
	cin >> v >> t >> s>> d;

	if (t <= d/v && d/v <= s)
		cout << "No" <<endl;
	else
		cout << "Yes" << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
