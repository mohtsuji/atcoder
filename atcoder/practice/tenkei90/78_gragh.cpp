#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> b(m);
    for ( int i =0; i < m; i++)
        cin >> a[i] >> b[i];
    
    vector<vector<int> >    re(n + 1);

    for (int i = 0; i < m; i++)
    {
        re[a[i]].push_back(b[i]);
        re[b[i]].push_back(a[i]);
    }
    int rec = 0;
    for (int i = 1; i < n + 1; i++)
    {
        int c = 0;
        for (vector<int>::iterator j = re[i].begin(); j != re[i].end(); j++)
        {
            if (*j < i)
                c++;
        }
        if (c == 1)
            rec += 1;
    }
    cout << rec << endl;
}