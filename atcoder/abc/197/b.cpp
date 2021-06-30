#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;

int	h, w, x, y;

int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	cin >> h >> w >> x >> y;
	vector<vector<char>>	s(h, vector<char>(w));

	for (int i = 0; i < h; i++) {
   		 for (int j = 0; j < w; j++) {
      		cin >> s.at(i).at(j);
    }
  }

	int	ans = 0;

	x = x-1;
	y = y-1;

	if (s.at(x).at(y) == '.')
		ans++;
	for (int i = x-1; i >= 0; i--){
		if (s.at(i).at(y) == '.')
			ans++;
		else
			break;
	}
	for (int i = x+1; i < h; i++){
		if (s.at(i).at(y) == '.')
			ans++;
		else
			break;
	}
	for (int i = y-1; i >= 0; i--){
		if (s.at(x).at(i) == '.')
			ans++;
		else
			break;
	}
	for (int i = y+1; i < w; i++){
		if (s.at(x).at(i) == '.')
			ans++;
		else
			break;
	}

	cout << ans << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
