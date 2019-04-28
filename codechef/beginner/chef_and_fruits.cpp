#include <iostream>
#include <cmath>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    int n, m, k;
    int ans = 0;
    while (t--)
    {
        cin >> n >> m >> k;
        ans = abs(n - m);
        // cout << ans << " ";
        while (ans != 0 && k != 0)
        {
            ans = ans - 1;
            k--;
        }
        cout << ans << endl;
    }
    return 0;
}