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

	int	n, q;
	cin >> n;
	char	*s1, *s2;
	s1 = (char *)malloc(sizeof(char) * (n + 1));
	s2 = (char *)malloc(sizeof(char) * (n + 1));
	int	i = 0;
	while(i < n){
		cin >> s1[i];
		i++;
	}
	s1[i] = '\0';
	i = 0;
	while(i < n){
		cin >> s2[i];
		i++;
	}
	s2[i] = '\0';

	cin >> q;
	vector<int> t(q), a(q), b(q);
	for (int i = 0; i < q; i++)
		cin >> t[i] >> a[i] >> b[i];

	string	tako;
	char	tmp;
	for (int i = 0; i < q; i++){
		if (t[i] == 1){
			tmp = s[a[i] - 1];
			s[a[i] - 1] = s[b[i] - 1];
			s[b[i] - 1] = tmp;
		}
		else if (t[i] == 2){
			for (int j = 0; j < n; j++)
				tako[j] = s[j];
			for (int j = 0; j < n; j++){
				s[j] = s[j + n];
			}
			for (int j = 0; j < n; j++){
				s[j + n] = tako[j];
			}
		}
	}

	cout << s << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
