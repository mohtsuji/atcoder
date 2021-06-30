#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;
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

	int	n, D, H;
	cin >> n >> D >> H;
	vector<int> d(n), h(n);
	for (int i = 0; i < n; i++){
		cin >> d[i] >> h[i];
	}
	double	height = 0;
	double	maxi = 0;
	double	y = 0;
	for (int i = 0; i < n; i++){
		y = h[i] / d[i];
		height = max(height, y);
		if (height == y)
			maxi = i;
	}
	double	ans;
	if (H/D >= height)
		cout << 0.0 << endl;
	else
	{
		ans = (D * h[maxi]) / (H * d[maxi]);
		cout << ans << endl;
	}
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
