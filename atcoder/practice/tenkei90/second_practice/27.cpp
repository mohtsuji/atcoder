#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;

    set<string> se;
    string  s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (se.find(s) == se.end())
        {
            se.insert(s);
            cout << i + 1 << endl;
        }
    }
}