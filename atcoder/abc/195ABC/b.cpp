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

	ll	a, b, w;
	cin >> a >> b >> w;
	w = w * 1000;
	ll	w2 = w;

	int	tmp, tmp2, b2;
	b2 = b;
	int	flag= 0;
	int	count = 0;
	if(w % b == 0)
	{
		cout << w/ b << " ";
		flag = 1;
	}
	else
	{
		while (b2 >= a)
		{
		count = (w / b2);
		while (count > 0)
		{
			tmp2 = w - count * b2;//amari
			if (tmp2 < a)
			{
				count -= 1;
				continue ;
			}
			else
			{
				for (int i = b; i >= a ; i--)
				{
					if (tmp2 % i == 0)
					{
						cout << count + tmp2 / i << " ";
						flag = 1;
						break;
					}
				}
			}
			if (flag == 1)
				break;
			count -= 1;
		}
			if (flag == 1)
				break;
		b2--;
		}
	}
	int a2 = a;
	if (flag == 0)
	{
		cout << "UNSATISFIABLE" << endl;
		return 0;
	}
	else if(w % a == 0)
	{
		cout << w/ a << endl;
		flag = 1;
	}
	else
	{
		while (a2 <= b)
		{
		count = (w / a2);
		while (count > 0)
		{
			tmp2 = w - count * a2;//amari
			if (tmp2 < a)
			{
				count -= 1;
				continue ;
			}
			else
			{
				for (int i = a; i <= b ; i++)
				{
					if (tmp2 % i == 0)
					{
					//printf("kakunin");
					//fflush(stdout);
						cout << count + tmp2 / i << endl;
						flag = 1;
						return 0;
					}
				}
			}
			count -= 1;
		}
		a2++;
		}
	}
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
