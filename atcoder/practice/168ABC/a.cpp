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

	int	ans;
	ans = n % 10;
	if (ans == 3)
		cout << "bon" << endl;
	else if (ans == 0 || ans == 1 || ans == 6 || ans == 8 )
		cout << "pon" << endl;
	else
		cout << "hon" << endl;

	return (0);
}
