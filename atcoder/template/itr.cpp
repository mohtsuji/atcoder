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

	vector<string> tako = {"meko", "ika", "i"};

	auto fir = tako.begin();
	auto last = tako.end();
	
	int size = distance(fir, last);

	cout << last - fir << endl;
	cout << size << endl;

	auto itr = tako.end();
	cout << *itr << endl;

	cout << *(tako.end()) << endl;
	return 0;
}
