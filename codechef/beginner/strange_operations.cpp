#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long n, k, sum = 0;
        cin >> n >> k;
        long a[n + k];
        for (long long j = 0; j < n; j++)
        {
            cin >> a[j];
            sum += a[j];
        }
        for (long long j = n; j < (n + k); j++)
        {
            a[j] = sum + 1;
            sum = sum + a[j];
        }
        if (a[n + k - 1] % 2 == 0)
            cout << "even" << endl;
        else if (a[n + k - 1] % 2 != 0)
            cout << "odd" << endl;
    }
    return 0;
}