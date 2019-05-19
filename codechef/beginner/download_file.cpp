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
        int n, k;
        cin >> n >> k;
        int sum = 0;
        while (n--)
        {
            int ti, di;
            cin >> ti >> di;
            if (k != 0)
            {
                int temp = k - ti;
                if (temp < 0)
                {
                    ti = ti - k;
                    k = 0;
                }
                else if (temp > 0)
                {
                    ti = 0;
                    k = temp;
                }
                else
                {
                    ti = 0;
                    k = 0;
                }
            }
            sum = sum + (ti * di);
        }
        cout << sum << "\n";
    }
    return 0;
}