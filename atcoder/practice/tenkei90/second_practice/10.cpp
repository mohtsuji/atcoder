#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> c(n);
    vector<int> s(n);
    for (int i = 0; i < n; i++)
        cin >> c[i] >> s[i];
    int q;
    cin >> q;
    vector<int> l(q);
    vector<int> r(q);
    for (int i = 0; i < q; i++)
        cin >> l[i] >> r[i];
    
    vector<ll>  sum1(n);
    vector<ll>  sum2(n);
    if (c[0] == 1)
    {
        sum1[0] = s[0];
        sum2[0] = 0;
    }
    else
    {
        sum2[0] = s[0];
        sum1[0] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (c[i] == 1)
        {
            sum1[i] = sum1[i - 1] + s[i];
            sum2[i] = sum2[i - 1];
        }
        else
        {
            sum2[i] = sum2[i - 1] + s[i];
            sum1[i] = sum1[i - 1];
        }
    }
    for (int i = 0; i < q; i++)
    {
        if (l[i] == 1)
            cout << (sum1[r[i] - 1]) << " " << sum2[r[i] - 1] << endl;
        else
            cout << (sum1[r[i] - 1] - sum1[l[i] - 2]) << " " << sum2[r[i] - 1] - sum2[l[i] - 2] << endl;
    }
    


}