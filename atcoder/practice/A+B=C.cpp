#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;

int	t;

int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	cin >> t;
	vector<ll> l(t);
	vector<ll> r(t);

	for (int i=0; i<t; i++){
		cin >> l[i] >> r[i];
	}

	for (int i=0; i<t; i++)
	{
		ll	ans = 0;
		if (r[i] == 0 && l[i] == 0)
			ans++;
		while (r[i] > l[i])
		{
			//if (r[i] == l[i] && r[i] == 0)
			//	ans++;
			//for (int k=r[i]-1; k>=l[i]; k--)
			for (int  k=l[i]; k<=r[i]; k++)
			{
				//printf("i=%ld k=%d R=%ld L=%ld\n", i, k, r[i], l[i]);
				if (r[i] - k >= l[i])
					ans++;
				else
					break ;
			}
			r[i]--;
		}
		cout << ans << endl;
	}

	return 0;
}

/*~~~~~~nyanndane~~~~~*/
