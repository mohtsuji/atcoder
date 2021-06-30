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

	string	s;
	cin >> s;

	int	i, count;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == 'Z')
		{
			if (s[i + 1] == 'O')
			{
				if (s[i + 2] == 'N')
				{
					if (s[i + 3] == 'e')
						count++;
				}
			}
		}
		i++;
	}

	cout << count << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
