#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;

int	henkan(int i)
{
	int	ans = 0;
	int	j = 0;
	int	n = 1;

	while(i != 0)
	{
		j = i % 8;
		i = i / 8;
		henkan(i);
		ans = ans + (j * n);
		n = n * 10;
	}
	//return (ans / 10);
	return (ans);
}


int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	int	i;

	cin >> i;

	int ans = henkan(i);
	cout << ans << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
