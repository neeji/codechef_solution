#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
void sol(ll n, ll b, ll m, ll &ans)
{
    if (n == 0)
    {
        return;
    }
    if (n % 2 == 0)
    {
        ans += (n / 2) * m + b;
        sol(n / 2, b, 2 * m, ans);
    }
    else
    {
        ans += ((n + 1) / 2) * m + b;
        sol(n / 2, b, 2 * m, ans);
    }
}
int main(void)
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, b, m;
        cin >> n >> b >> m;
        ll ans = 0;
        sol(n, b, m, ans);
        cout << ans - b << "\n";
    }
    return 0;
}