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
        int n, m;
        cin >> n >> m;
        bool arr[1005][1005] = {0};
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i + 1 < n)
                {
                    if (arr[i + 1][j])
                    {
                        ans++;
                    }
                }
                if (i - 1 >= 0)
                {
                    if (arr[i - 1][j])
                    {
                        ans++;
                    }
                }
                if (j + 1 < m)
                {
                    if (arr[i][j + 1])
                    {
                        ans++;
                    }
                }
                if (j - 1 >= 0)
                {
                    if (arr[i][j - 1])
                    {
                        ans++;
                    }
                }
                arr[i][j] = true;
            }
        }
        cout << ans << endl;
    }
    return 0;
}