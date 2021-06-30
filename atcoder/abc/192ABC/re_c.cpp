#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ll long long
#define dev(i, tako) prinf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;

int	N, K;

int	f(int x){
	string s = to_string(x);
	sort(whole(s));
	int g2 = stoi(s);

	sort(rwhole(s));
	int	g1 = stoi(s);

	return g1 - g2;
}


int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	cin >> N >> K;
	int	a = N;
	rep(i, 0, K) a = f(a);
	cout << a << endl;
	return 0;
}
