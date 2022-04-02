#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int> >  p(n);

    for (int i = 0; i<n; i++)
        cin >> p[i].first >> p[i].second;

    int q;
    cin >> q;
    vector<pair<int, int> >  lr(q);
    for (int i = 0; i < q; i++)
        cin >> lr[i].first >> lr[i].second;

    vector<ll>  dp1(n);
    vector<ll>  dp2(n);

    if (p[0].first == 1)
    {
        dp1[0] = p[0].second;
        dp2[0] = 0;
    }
    else
    {
        dp2[0] = p[0].second;
        dp1[0] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (p[i].first == 1)
        {
            dp1[i] = p[i].second + dp1[i - 1];
            dp2[i] = 0 + dp2[i - 1];
        }
        else
        {
            dp2[i] = p[i].second + dp2[i - 1];
            dp1[i] = 0 + dp1[i - 1];
        }
    }
    for (int i = 0; i < q; i++)
    {
        if (lr[i].first < 2)
        {
            cout << dp1[lr[i].second - 1] - 0;
            cout << " ";
            cout << dp2[lr[i].second - 1] - 0;
            cout << "\n";
        }
        else
        {
            cout << dp1[lr[i].second - 1] - dp1[lr[i].first - 2];
            cout << " ";
            cout << dp2[lr[i].second - 1] - dp2[lr[i].first - 2];
            cout << "\n";
        }
    }
}