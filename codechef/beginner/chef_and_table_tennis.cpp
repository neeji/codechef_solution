#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
int count1 = 0;
int count2 = 0;
string solve(string &s, int i = 0)
{
    if (s[i] == '\0')
    {
        // cout << ::count1 << " " << count2 << endl;
        if (count1 > count2)
        {
            return "WIN";
        }
        else
        {
            return "LOSE";
        }
    }
    if (s[i] == '1')
    {
        ::count1++;
    }
    else
    {
        ::count2++;
    }
    return solve(s, i + 1);
}
int main(void)
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        ::count1 = ::count2 = 0;
        string s;
        cin >> s;
        cout << solve(s);
        cout << "\n";
    }
    return 0;
}