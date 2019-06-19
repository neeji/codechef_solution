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
    string s;
    cin >> s;
    if (s.length() == 1)
    {
        cout << 1 << endl;
    }
    else if (s.length() == 2)
    {
        cout << "2" << endl;
    }
    else if (s.length() == 3)
    {
        cout << "3" << endl;
    }
    else
    {
        cout << "More than 3 digits" << endl;
    }
    return 0;
}