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
        unordered_set<string> ing;
        string f1, f2, f3, f4;
        cin >> f1 >> f2 >> f3 >> f4;
        ing.insert(f1);
        ing.insert(f2);
        ing.insert(f3);
        ing.insert(f4);
        string s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        ing.insert(s1);
        ing.insert(s2);
        ing.insert(s3);
        ing.insert(s4);
        if (ing.size() <= 6)
        {
            cout << "similar";
        }
        else
        {
            cout << "dissimilar";
        }
        cout << "\n";
    }
    return 0;
}