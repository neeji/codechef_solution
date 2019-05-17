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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        if (n % 2 == 0)
        {
            cout << max(a, b) / min(a, b);
        }
        else
        {
            a = 2 * a;
            cout << max(a, b) / min(a, b);
        }
        cout << endl;
    }
    return 0;
}