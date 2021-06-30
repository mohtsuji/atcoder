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

	int	flag = 0;//0だったらs1が先
	string	tako;
	char	tmp;
	for (int i = 0; i < q; i++){
		if (t[i] == 1){
			if (flag == 0)
			{
				if (a[i] > n)
				{
					a[i] = a[i] - n;
					tmp = s2[a[i] - 1];
					if (b[i] > n)
					{
						b[i] = b[i] - n;
						s2[a[i] - 1] = s2[b[i] - 1];
						s2[b[i] -1] = tmp;
					}
					else
					{
						s2[a[i] - 1] = s1[b[i] - 1];
						s1[b[i] -1] = tmp;
					}
				}
				else{
					tmp = s1[a[i] - 1];
					if (b[i] > n)
					{
						b[i] = b[i] - n;
						s1[a[i] - 1] = s2[b[i] - 1];
						s2[b[i] -1] = tmp;
					}
					else
					{
						s1[a[i] - 1] = s1[b[i] - 1];
						s1[b[i] -1] = tmp;
					}
				}
			}
			else
			{
				if (a[i] > n)
				{
					a[i] = a[i] - n;
					tmp = s1[a[i] - 1];
					if (b[i] > n)
					{
						b[i] = b[i] - n;
						s1[a[i] - 1] = s1[b[i] - 1];
						s1[b[i] -1] = tmp;
					}
					else
					{
						s1[a[i] - 1] = s2[b[i] - 1];
						s2[b[i] -1] = tmp;
					}
				}
				else{
					tmp = s2[a[i] - 1];
					if (b[i] > n)
					{
						b[i] = b[i] - n;
						s2[a[i] - 1] = s1[b[i] - 1];
						s1[b[i] -1] = tmp;
					}
					else
					{
						s2[a[i] - 1] = s2[b[i] - 1];
						s2[b[i] -1] = tmp;
					}
				}
			}
		}
		else if (t[i] == 2){
			if (flag == 0)
				flag = 1;
			else
				flag = 0;
		}
	}

	if (flag == 0)
		cout << s1 << s2 << endl;
	else
		cout << s2 << s1 << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
