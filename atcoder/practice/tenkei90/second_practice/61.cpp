#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<int>   t(q);
    vector<int>   x(q);
    for (int i = 0; i < q; i++)
        cin >> t[i] >> x[i];
    deque<int>   d;

    for (int i = 0; i < q; i++)
    {
        if (t[i] == 1)
            d.push_front(x[i]);
        else if (t[i] == 2)
            d.push_back(x[i]);
        else
            cout << d[x[i] - 1] << endl;
    }


}