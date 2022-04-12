#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i< n; i++)
        cin >> a[i];
    for (int i = 0; i< n; i++)
        cin >> b[i];
    
    ll  dif = 0;
    for (int i = 0; i < n; i++)
        dif += abs(a[i] - b[i]);
    if (dif > k)
    {
        cout << "No";
        return (0);
    }
    if (k % 2 == 0)
    {
        if (dif % 2 == 0)
            cout << "Yes";
        else
            cout << "No";
    }
    else
    {
        if (dif % 2 == 0)
            cout << "No";
        else
            cout << "Yes";
    }
}