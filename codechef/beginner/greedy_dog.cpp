#include <iostream>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, max = 0;
        cin >> n >> k;
        while (k > 0)
        {
            if (n % k > max)
                max = n % k;
            k--;
        }
        cout << max << "\n";
    }
    return 0;
}
