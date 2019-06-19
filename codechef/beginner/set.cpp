#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
int main(void)
{
    fast();
    ll t;
    cin >> t;
    ll w = t;
    while (t--)
    {
        ll l, r, g;
        cin >> l >> r >> g;
        ll a = l / g;
        ll b = r / g;
        if ((l % g) == 0)
            a--;
        ll c = b - a;
        if (c == 1)
        {
            if (l <= g && g <= r)
            {
                ;
            }
            else
            {
                c--;
            }
        }
        cout << c << endl;
    }
    return 0;
}