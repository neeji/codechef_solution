#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
bool compare(ll a, ll b)
{
    if (a > b)
    {
        return a;
    }
}
int main(void)
{
    fast();
    ll t;
    cin >> t;
    while (t--)
    {
        map<ll, ll> sticks;
        ll n, temp;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> temp;
            if (sticks.count(temp))
            {
                sticks[temp]++;
            }
            else
            {
                sticks[temp] = 1;
            }
        }
        ll k = 2;
        ll ans = 1;
        // auto it = --sticks.end();
        // auto end = --sticks.begin();
        // while (k != 0)
        // {
        //     if (it == end)
        //     {
        //         ans = -1;
        //         break;
        //     }
        //     if (k == 2 && it->second >= 4)
        //     {
        //         ans *= it->first * it->first;
        //         // k = k - 2;
        //         break;
        //     }
        //     else if (it->second >= 2)
        //     {
        //         ans = ans * it->first;
        //         k--;
        //     }
        //     it--;
        // }
        auto it = sticks.rbegin();
        for (auto it = sticks.rbegin(); it != sticks.rend(); it++)
        {
            if (k == 0)
            {
                break;
            }
            if (k == 2 && it->second >= 4)
            {
                ans *= it->first * it->first;
                k = k - 2;
                break;
            }
            else if (it->second >= 2)
            {
                ans = ans * it->first;
                k--;
            }
        }
        if (k != 0)
        {
            ans = -1;
        }
        cout << ans << "\n";
        // stupid use rbegin rend for iterating reverse in map
        // for (auto it = sticks.rbegin(); it != sticks.rend(); it++)
        // {
        //     cout << it->first << " " << it->second << "\n";
        // }
    }
    return 0;
}