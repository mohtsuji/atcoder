#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> q;
    vector<int> b(q);
    for (int i = 0; i < q; i++)
        cin >> b[i];

   sort(a.begin(), a.end());

    std::vector<int>::iterator  tmp;
   for (int i = 0; i < q; i++)
   {
       tmp = lower_bound(a.begin(), a.end(), b[i]);
        if (*tmp == b[i])
            cout << 0 << endl;
        else
        {
            if (tmp  != a.begin())
            {
             if ((abs(b[i] - *tmp)) < (abs(b[i] - *(tmp - 1))))
                 cout << (abs(b[i] - *tmp)) << endl;
             else
                 cout << (abs(b[i] - *(tmp - 1))) << endl;
            }
            else
                 cout << (abs(b[i] - *tmp)) << endl;
        }
   }

}