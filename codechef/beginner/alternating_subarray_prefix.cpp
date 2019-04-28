#include <iostream>
#include <vector>
#define ll long long
#define ull unsigned long long
#define ui unsigned int

using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long> v(n), ans(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        ans[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if ((v[i] > 0 && v[i + 1] < 0) || (v[i] < 0 && v[i + 1] > 0))
                ans[i] = ans[i + 1] + 1;
            else
                ans[i] = 1;
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}