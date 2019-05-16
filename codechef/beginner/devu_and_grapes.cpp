#include <iostream>
#include <vector>
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll sum = 0;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ll r = arr[i] % k;
            if (arr[i] >= k)
            {
                sum = sum + min(k - r, r);
            }
            else
            {
                sum = sum + k - r;
            }
        }
        cout << sum << endl;
    }

    return 0;
}