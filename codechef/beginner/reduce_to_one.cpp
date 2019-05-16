#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
ll dp[1000007];

int main()
{
    ll t;
    cin >> t;

    dp[1] = 1;
    for (ll i = 2; i <= 1000007; i++)
    {
        dp[i] = i + dp[i - 1] + (i * dp[i - 1]);
        dp[i] = dp[i] % mod;
    }

    while (t--)
    {
        ll n;

        cin >> n;
        ll ans = dp[n];
        cout << ans << endl;
    }
}