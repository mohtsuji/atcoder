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

	ll	n;
	cin >> n;

	ll	tmp = 1;
	int	count = 0;
	ll n2 = n;
	while (n2 > 0)
	{
		n2 = n2 / 10;
		count++;
	}
	int	count2= count;
	while (count2 < 0)
	{
		tmp *= 10;
		count2--;
	}
	int	keta;
	int	amari;
	if (n <= 3)
	{
		cout << 0 << endl;
		return 0;
	}
	
	keta = count / 3;
	amari = n - tmp;
	int	ans= 0;
	ans += amari;
	

	cout << ;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
