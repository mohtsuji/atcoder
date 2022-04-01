#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll  n;
    string  s;
    cin >> n;
    cin >> s;
    s = " " + s;
    ll  mod = 1000000007;
    ll  dp[100010][8];
    string  t = "xatcoder";

    for (ll j = 0; j < n + 1; j++)
        dp[j][0] = 1;
    for (ll i = 1; i < n + 1; i++)
    {
        for (ll j = 1; j < 8; j++)
        {
            if (s[i] == t[j])
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
            else
                dp[i][j] = dp[i - 1][j];
        }
        for (ll j = 1; j < 8; j++)
            dp[i][j] = dp[i][j] % mod;
    }
    cout << dp[n][7];
    return (0);

}