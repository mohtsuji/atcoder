#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

string	s;
#define yes "Yes"
#define no "No"

string solve()
{
	int	size = s.size();
	rep(i, 0, size){
		if (i % 2 == 0 && 'a' <= s[i] && s[i] <= 'z'){}
		else if (i % 2 == 1 && 'A' <= s[i] && s[i] <= 'Z'){}
		else return no;
	}
	return yes;
}


int	main()
{
	cin >> s;
	string ans;
	ans = solve();
	cout << ans << endl;
	return 0;
}
