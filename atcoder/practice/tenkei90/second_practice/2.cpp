#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = 1;
    for (int i = 0; i < n; i++)
        max *= 2;
    for (int bit = 0 ; bit < max; bit++)
    {
        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (!(bit & (1 << i)))
                zero++;
            else
                one++;
            if (zero > one)
                break;
        }
        if (zero == one)
        {
            for (int i = n - 1; i >= 0; i--)
           {
               if (!(bit & (1 << i)))
                   cout << '(';
               else
                   cout << ')';
           }
           cout << "\n";
        }
    }
}