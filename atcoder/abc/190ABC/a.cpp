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

	int a, b, c;

	cin >> a >> b >> c;

	if (c == 0)
	{
		while (1)
		{
			if (--a <= 0)
			{
				cout << "Aoki" << endl;
				break;
			}
			if (--b <= 0)
			{
				cout << "Takahashi" << endl;
				break;
			}
		}
	}
	else
	{
		while (1)
		{
			if (--b <= 0)
			{
				cout << "Takahashi" << endl;
				break;
			}
			if (--a <= 0)
			{
				cout << "Aoki" << endl;
				break;
			}
		}
	}
	return (0);
}

/*~~~~~~nyanndane~~~~~*/
