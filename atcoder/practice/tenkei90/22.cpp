#include <bits/stdc++.h>
#include <numeric>
#define ll long long

using namespace std;

int main()
{
    ll  a, b, c;
    cin >> a >> b >> c;


    ll   s;
    s = gcd(gcd(a, b), c);

    cout << (a / s - 1) + (b / s - 1) + (c / s - 1);
}