#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string  n;
    int      k;
    cin >> n >> k;

    for (int j = 0; j < k; j++)
    {
    //８進数→１０進数
    ll  ans8 = 0;
    ll  weight = 1;
    for (int i = n.size() - 1; i >= 0 ;i--)
    {
        ans8 += (n[i] - '0') * weight;
        weight *= 8;
    }
    //１０進数→９進数
    weight = 1;
    ll  ans9 = 0;
    while (ans8 > 0)
    {
        ans9 += (ans8 % 9) * weight;
        ans8 /= 9;
        weight *= 10;
    }
    //'8'->'5'
    n = to_string(ans9);
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '8')
            n[i] = '5';
    }
    }
    cout << n;
}