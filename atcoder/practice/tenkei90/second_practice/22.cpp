#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll  a, b, c;
    cin >> a >> b >> c;

    ll  common = gcd(a, gcd(b, c));

    cout << (a/common) + b/common + c/common - 3;
}