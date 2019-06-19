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
    while (t--)
    {
        ll n, sum = 0, test_sum = 0;
        cin >> n;
        vector<ll> arr(n);
        map<ll,ll> diffs;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            test_sum += arr[i];
        }
        sum = n * (arr[0] + arr[n - 1]) / 2;
        if (sum == test_sum)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {

        }
    }
    return 0;
}