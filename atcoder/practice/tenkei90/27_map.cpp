#include <bits/stdc++.h>
#include <numeric>
#define ll long long

using namespace std;

int main()
{
    int  n;
    cin >> n;
    vector<string>  s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        if (m[s[i]] == 1)
            continue;
        m[s[i]] = 1;
        cout << i + 1 << "\n";
    }
    
}