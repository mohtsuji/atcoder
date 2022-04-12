#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int> > a(h, vector<int>(w));
    vector<vector<int> > b(h, vector<int>(w));

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            cin >> a[i][j];
    }

    vector<ll>  hsum(h);
    vector<ll>  wsum(w);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            hsum[i] += a[i][j];
    }
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
            wsum[i] += a[j][i];
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            cout << (hsum[i] + wsum[j] - a[i][j]) << " ";
        cout << "\n";
    }

}