#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        ll  now = a[i] % p;
        for (int j = 0; j < i; j++)
        {
            now = now*a[j]%p;
            for (int k = 0; k < j; k++)
            {
                now = now*a[k]%p;
                for (int o = 0; o < k; o++)
                {
                    now = now*a[o]%p;
                    for (int u = 0; u < o; u++)
                    {
                        if (now*a[u]%p == q)
                            c++;
                    }
                }
            }
        }
    }
    cout << c;
}