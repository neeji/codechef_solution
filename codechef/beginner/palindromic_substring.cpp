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
        unordered_map<char, bool> alphas;
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; s1[i] != '\0'; i++)
        {
            alphas[s1[i]] = true;
        }
        int i = 0;
        for (i = 0; s2[i] != '\0'; i++)
        {
            if (alphas[s2[i]])
            {
                cout << "Yes";

                break;
            }
        }
        if (s2[i] == '\0')
        {
            cout << "No";
        }
        cout << "\n";
    }
    return 0;
}