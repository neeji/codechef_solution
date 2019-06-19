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
        string s;
        cin >> s;
        // if (s.length() % 2 == 1)
        // {
        //     cout << "NO" << endl;
        // }
        // else
        // {
        bool flag = true;
        for (int i = 2; i < s.length(); i += 2)
        {
            if (s[i] != s[0] || s[i + 1] != s[1])
            {
                flag = false;
                break;
            }
        }
        if (s[0] == s[1])
        {
            flag = false;
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    // }
    return 0;
}