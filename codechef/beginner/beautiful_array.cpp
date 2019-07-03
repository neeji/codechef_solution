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
        int n;
        cin >> n;
        vector<ll> arr(n);
        map<ll, bool> present;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (present.find(arr[i]) == present.end())
            {
                present[arr[i]] = true;
            }
        }
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (present.find(arr[i] * arr[j]) != present.end())
                {
                    cout << "yes" << endl;
                    flag = false;
                    break;
                }
            }
            if (!flag)
            {
                break;
            }
        }
        if (flag)
        {
            cout << "no" << endl;
        }
    }
    return 0;
}