#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 100;

int t, n, a[maxn];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> t;
    assert(1 <= t && t <= 100);
    cin.ignore();
    while (t--)
    {
        string tmp;
        getline(cin, tmp);
        stringstream ss;
        ss << tmp;
        n = 0;
        while (ss >> a[n++])
            ;
        n -= 2;
        assert(n <= 50);
        bool seen = 0;
        int ans = 0;
        for (int i = 0; i < n + 1; i++)
            if (a[i] == n)
                if (seen)
                    ans = max(ans, a[i]);
                else
                    seen = 1;
            else
                ans = max(ans, a[i]);
        cout << ans << '\n';
    }
    return 0;
}