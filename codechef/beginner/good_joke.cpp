#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t, ans, x, y, n;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> x >> y;
            ans = ans ^ i;
        }
        cout << ans << endl;
    }
    return 0;
}