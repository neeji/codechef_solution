#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
int count = 0;
void count_pair(string &s, int i = 0)
{
    if (i == s.length())
    {
        return;
    }
    else if (s[i] == '<' && s[i + 1] == '>')
    {
        ::count++;
        return count_pair(s, i + 2);
    }
    else
    {
        return count_pair(s, i + 1);
    }
}
int main(void)
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        ::count = 0;
        string s;
        cin >> s;
        count_pair(s);
        cout << ::count << "\n";
    }
    return 0;
}