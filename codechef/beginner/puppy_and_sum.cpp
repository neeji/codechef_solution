#include <iostream>

#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int sum_n(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum_n(n - 1);
    }
}
int sum(int d, int n)
{
    if (d == 0)
    {
        return n;
    }
    return sum(d - 1, sum_n(n));
}
int main(void)
{
    int t;
    cin >> t;
    int d, n, ans;
    while (t--)
    {
        cin >> d >> n;
        cout << sum(d, n) << endl;
        // cout << ans << endl;
    }
    return 0;
}