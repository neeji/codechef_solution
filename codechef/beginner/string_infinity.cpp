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
    set<string> uni;
    char temp[10000];
    string temp;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            // for(int k = i;k<=j;k++){
            cout << s.substr(i, j);
            // }
        }
    }
    return 0;
}