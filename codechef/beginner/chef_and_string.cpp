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
    ll int c = 0, h = 0, e = 0, f = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'C')
        {
            c++;
        }
        else if (s[i] == 'H')
        {
            if (h < c)
            {
                h++;
            }
        }
        else if (s[i] == 'E')
        {
            if (e < h)
            {
                e++;
            }
        }
        else if (s[i] == 'F')
        {
            if (f < e)
            {
                f++;
            }
        }
    }
    cout << f << "\n";
    return 0;
}