#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n; cin >> n;

    ll ans = 0;
    ll  num = 1;;
    for (int i = 0; i < n; i++)
        num *= 2;
    for (int i = 0; i < num - 1; i++)
    {
        ans += 1;
        int one = 0;
        int zero = 0;
        for (int j = 0; j < n; j++)
        {
            if (ans & (1 << j))
                one++;
            else
                zero++;
            if (zero > one)
                break ;
        }
        if (zero == one)
        {
            for (int j = n - 1; j >= 0; --j)
            {
                if (ans & (1 << j))
                    cout << ")";
                else
                    cout << "(";
            }
            cout << "\n";
        }
    }

}