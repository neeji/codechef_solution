#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        vector<ll> v;
        for (int i = 0; i < n + 1; i++)
        {
            ll x;
            cin >> x;
            v.pb(x);
        }
        ll c = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == s2[i])
                c++;
        }
        if (c == n)
            cout << v[n] << endl;
        else
            cout << *max_element(v.begin(), v.begin() + c + 1) << endl;
    }
    return 0;
}