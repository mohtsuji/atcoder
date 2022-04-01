#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main()
{
 ll  N;
 ll  K;

std::cin >> N >> K;

vector<ll>   a(N);
vector<ll>   b(N);
vector<ll>   dp(N, false);
vector<ll>   ep(N, false);

for (ll l = 0; l < N; l++)
    std::cin >> a[l];
for (ll l = 0; l < N; l++)
    std::cin >> b[l];

dp[0] = true;
ep[0] = true;

for(ll i = 1; i < N; i++)
{
    if (dp[i - 1])
    {
        if (abs(a[i - 1] - a[i]) <= K)
            dp[i] = true;
        if (abs(a[i - 1] - b[i]) <= K)
            ep[i] = true;
    }
    if (ep[i - 1])
    {
        if (abs(b[i - 1] - a[i]) <= K)
            dp[i] = true;
        if (abs(b[i - 1] - b[i]) <= K)
            ep[i] = true;
    }
}
if (dp[N - 1] || ep[N - 1])
    cout << "Yes";
else
    cout << "No";
return(0);
}