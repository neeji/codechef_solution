#include <bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll ans = (power(a, b / 2)) % mod;
    if (b % 2 == 0)
    {
        return (ans * ans) % mod;
    }
    else
    {
        return (a * ans * ans) % mod;
    }
}
int main(void)
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << (power(2, n - 1) * 10) % mod;
        cout << "\n";
    }
    return 0;
}