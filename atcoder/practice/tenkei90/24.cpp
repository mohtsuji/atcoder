#include <bits/stdc++.h>
#include <numeric>
#define ll long long

using namespace std;

int main()
{
    ll  n, k;
    cin >> n >> k;

    vector<ll>  a(n);
    vector<ll>  b(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];

    ll  s = 0;
    for (ll i = 0; i < n; i++)
    {
        s += abs(a[i] - b[i]);
    }
    if (s > k)
    {
        cout << "No";
        return (0);
    }
    ll re = k - s;
    if (re % 2 == 0)
        cout << "Yes";
    else
        cout << "No";
}