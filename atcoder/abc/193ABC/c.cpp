#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;

int	n;

int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	cin >> n;
	int	tmp;

	int	flag = 0;
	int cnt = 0;
	for (int i =4; i<=n; i++)
	{
		int j = 2;
		while (i*i > j)
		{
			tmp = i;
			while (tmp % j == 0)
			{
				tmp = tmp / j;
				if (tmp == 1)
				{
					flag = 1;
					cnt++;
					break;
				}
			}
			if (flag == 1)
			{
				flag = 0;
				break;
			}
			j++;
		}
	}

	cout << n - cnt << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
