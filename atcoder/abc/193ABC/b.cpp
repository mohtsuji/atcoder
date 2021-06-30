#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;

int	a, p, x, n;

int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	cin >> n;
	vector<int> a(n), p(n), x(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> p[i] >> x[i];
	}
	int	kyori = a[0];
	for (int i = 0; i < n; i++)
		kyori = max(kyori, a[i]);

	int	y = 0;
	float t = 0;
	int	ans = 0;
	while (1)
	{
		for(int i = 0; i < n; i++)
		{
			if (t >= a[i])
			{
				//printf("tako\n");
				//printf("x[i]=d\n", x[i]);
				if (x[i] > 0)
				{
					if (ans == 0)
						ans = p[i];
					else
						ans = min(ans, p[i]);
				}
			}
		}
		//printf("ans=%d\n", ans);
		//printf("t=%g\n", t);
		if (y%2 == 0)
		{
			for (int i = 0; i < n; i++)
				x[i] = x[i] - 1;
		}
		t= t + 0.5;
		
		if (t > kyori)
			break;
		y++;
	}
	if (ans == 0)
	{
		cout << -1 << endl;
		return 0;
	}

	cout << ans << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
