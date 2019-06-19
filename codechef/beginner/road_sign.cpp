#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;
bool distinct(int a, int b)
{
    b = b - a;
    set<int> diff;
    if (a == 0)
    {
        diff.insert(0);
    }
    while (a > 0)
    {
        diff.insert(a % 10);
        a /= 10;
    }
    while (b > 0)
    {
        diff.insert(b % 10);
        b /= 10;
    }
    // cout << "in set ";
    // for (auto it : diff)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    if (diff.size() == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(void)
{
    fast();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    int count = 0;
    int n, temp = 1;
    cin >> n;
    // n = pow(10, n) - 1;
    for (int i = 0; i < n; i++)
    {
        temp = temp * 10;
    }
    // cout << pow(10, n);
    n = temp - 1;
    for (int i = 0; i < n / 2 + 1; i++)
    {
        if (distinct(i, n))
        {
            cout << i << " " << n - i << "\n";
            count++;
        }
    }
    cout << endl
         << 2 * count << endl;
    // }
    return 0;
    /// ans is 2^n-1 * 10;
}