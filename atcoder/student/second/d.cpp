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

	int	n, p;
	ll count;
	cin >> n >> p;

	for (int i = 1; i <= n; i++){
		for (int j = i; j <= (i*n); j++){
			if (j % p != 0)
				count++;
		}
	}
	count = count % (1000000000 + 7);
	cout << count << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
