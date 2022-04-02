#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int h;
    int w;

    cin >> h >> w;

    vector<vector<ll> >  a(h, vector<ll>(w));

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            cin >> a[i][j];
    }

    vector<ll>  sumh(w, 0);
    vector<ll>  sumw(h, 0);
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
            sumh[i] += a[j][i];
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            sumw[i] += a[i][j];
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << sumh[j] + sumw[i] - a[i][j] << " ";
        }
        cout << "\n";
    }


}