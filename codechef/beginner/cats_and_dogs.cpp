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
        ll c, d, l;
        cin >> c >> d >> l;
        ll mini = c > 2 * d ? (c - d) * 4 : d * 4;
        if (l % 4 == 0 && l >= mini && l <= (d + c) * 4)
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
        cout << endl;
    }
    return 0;
}