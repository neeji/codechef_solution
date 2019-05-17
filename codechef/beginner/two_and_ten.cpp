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
        ll x;
        cin >> x;
        if (x % 5 == 0)
        {
            if (x % 2 == 0)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }
        else
        {
            cout << "-1";
        }
        cout << endl;
    }
    return 0;
}