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

	double	r, x, y;
	cin >> r >> x >> y;

	double	k;
	k = sqrt((x*x) + (y*y));

	int	ans = 0;
	if (k < r)
		ans++;
	while (k > 0)
	{
		k = k - r;
		ans++;
	}

	cout << ans << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
