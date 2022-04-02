#include <bits/stdc++.h>
#include <numeric>
#define ll long long

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    int hc = h / 2;
    int wc = w / 2;
    if (h == 1)
    {
        cout << w;
        return 0;
    }
    else if (w == 1)
    {
        cout << h;
        return 0;
    }
    cout << (hc + h % 2) * (wc + w % 2);
}