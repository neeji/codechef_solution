#include <bits/stdc++.h>
#include <unordered_map>
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
        int l, b;
        cin >> l >> b;
        unordered_map<char, int> cap;
        cap['l'] = l;
        cap['b'] = b;
        int c = 1;
        while (1)
        {
            cap['l'] -= c++;
            if (cap['l'] < 0)
            {
                cout << "Bob";
                break;
            }
            cap['b'] -= c++;
            if (cap['b'] < 0)
            {
                cout << "Limak";
                break;
            }
        }
        cout << endl;
    }

    return 0;
}