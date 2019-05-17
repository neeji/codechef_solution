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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        int result = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] >= arr[i - 1])
            {
                count++;
                result = result + count;
            }
            else
            {
                count = 0;
            }
        }
        result = result + n;
        cout << result << "\n";
    }
    return 0;
}