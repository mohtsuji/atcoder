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

	int	a, b, x, y, ans;
	cin >> a >> b;

	if (b % 2 == 0){
		if (b / 2 >= a){
			ans = b / 2;
			cout << ans << endl;
			return 0;
		}
	}
	else{
		if ((b - 1) / 2 >= a){
			ans = (b - 1) / 2;
			cout << ans << endl;
			return 0;
		}
	}

	if (b % 2 == 0)
		ans = b/ 2;
	else
		ans = (b-1)/2;
	while (ans > 0)
	{
		for (int i = 1; ; i++){
			x = ans * i;
			y = ans * (i + 1);
			if (a <= x && y <= b){
				cout << ans << endl;
				return 0;
			}
			if (y > b)
				break;
		}
		ans--;
	}
	cout << "0" << endl;

	return 0;
}

/*~~~~~~nyanndane~~~~~*/
