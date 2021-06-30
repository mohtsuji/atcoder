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

	string n;
	cin >> n;

//	int n.size() = 0;
//	while (n[n.size()] != '\0')
//		n.size()++;


	for (int i = 1; i < n.size(); i++){
		if (n[0] != n[i])
			break ;
		if (i + 1 == n.size()){
			cout << "Yes" << endl;
			return 0;
		}
	}

	int	bz = 0;
	for (int i = (n.size() - 1); i >= 0; i--){
		if (n[i] == '0')
			bz++;
		else
			break ;
	}

	int	fz = 0;
	for (int i = 0; i < n.size(); i++){
		if (n[i] == '0')
			fz++;
		else
			break ;
	}

	int	size = n.size() - fz - bz;
	vector<char> t(size / 2);
	for (int i = fz; i < (size / 2); i++){
		t[i] = n[i];
	}

	int	i = fz;
	int j = n.size() - bz -1;
	int	flag = 0;
	while (i < size / 2)
	{
		if (t[i] != n[j])
		{
			flag = 1;
			break ;
		}
		i++;
		j--;
	}
	if (flag == 1)
		cout << "No" << endl;
	if (flag == 0)
		cout << "Yes" << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
