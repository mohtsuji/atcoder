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

	double	z, x, y, taka;
	double		ans, tmp;
	int	ans2;

	cin >> x >> y >> z;

	taka = y / x;
	ans = taka * z;
	tmp = ans;
	while (tmp > 0)
	{
		tmp = tmp -1;
		if (tmp == 0)
			ans = ans - 1;
	}
	if (ans < 0)
		ans = 0;
	ans2 = ans;

	cout << ans2 << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
