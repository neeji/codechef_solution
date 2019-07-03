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
        int rs;
        cin >> rs;
        char *r = new char[rs + 1];
        cin >> r;
        stack<char> s;
        bool flag = false;
        for (int i = 0; i < rs || r[i] != '\0'; i++)
        {
            if (r[i] == 'H')
            {
                if (s.empty())
                {
                    s.push('H');
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            else if (r[i] == 'T')
            {
                if (s.empty())
                {
                    flag = true;
                    break;
                }
                else
                {
                    s.pop();
                }
            }
        }
        if (!flag && s.empty())
        {
            cout << "Valid\n";
        }
        else
        {
            cout << "Invalid\n";
        }
    }
    return 0;
}