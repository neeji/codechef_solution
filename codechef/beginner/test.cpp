#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n];
        ll b[10000] = {0};
        ll m = 0, x;
        for (x = 0; x < n; x++)
        {
            cin >> a[x];
        }

        if (n < 4)
        {
            cout << -1 << "\n";
            continue;
        }
        else
        {
            sort(a, a + n, greater<ll>());
            ll i = 1;
            m = 0;
            for (x = 0; x < n - 1;)
            {
                if (a[x] == a[x + 1])
                {
                    i = i * a[x];
                    m++;
                    if (m == 2)
                        break;
                    x = x + 2;
                }
                else
                    x++;
            }
            if (x >= n - 1)
                cout << -1 << "\n";
            else
                cout << i << "\n";
        }
    }
}