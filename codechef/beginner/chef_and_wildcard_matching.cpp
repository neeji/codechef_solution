#include <iostream>
#include <cstring>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    int i = 0;
    int l = 0;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        l = s1.length();
        for (i = 0; i < l; i++)
        {
            if (s1[i] != '?' && s2[i] != '?')
            {
                if (s1[i] != s2[i])
                {
                    cout << "No" << endl;
                    break;
                }
            }
        }
        if (i == l)
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}